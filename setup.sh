#!/bin/bash

function help() {
  echo_green "Welcome to CMPUT 429"
  echo -e "\t\tI'm here to help you setup, to do so I will need to:"
  echo -e "\t\t - Create the following environment variables"
  echo -e "\t\t   - C429_RESOURCES: The root of this git repo"
  echo -e "\t\t   - GEM_PATH: The path for gem5"
  echo -e "\t\t   - GEM_CONFIGS: The path to gem5/configs"
  echo -e "\t\t   - GEM_TESTS: The path to the gem5 tests"
  echo -e "\t\t   - GEM5_CONFIG: Our special resources config file"
  echo -e "\t\t   - CC: The default C compiler (must be gcc-11)"
  echo -e "\t\t   - CXX: Default C++ compiler (must be g++-11)"
  echo -e "\t\t   - Write the environment variables to your default shell"
  echo -e "\t\t      file (.bashrc, .zshrc, etc) if not present"
  echo -e "\t\t - Configure the local resources on your profile"
  echo -e "\t\t   - Install pkl (pkl-lang.org) temporarily"
  echo -e "\t\t   - Compile some configuration files"
  echo -e "\t\t   - Create an alias to execute gem5 easier"
  echo -e "\t\t - Test the configuration"
  echo ""
  echo -e "$(echo_blue "Syntax:") $(basename $0) [options]"
  echo_blue "Additional Options:"
  echo -e "\t\t -g      Initialize the git submodules"
  echo -e "\t\t -c      Compile gem5"
  echo -e "\t\t -t      Test only"
}

function get_script_location() {
  SOURCE="${BASH_SOURCE[0]}"
  while [ -h "$SOURCE" ]; do
    # resolve $SOURCE until the file is no longer a symlink
    DIR="$( cd -P "$( dirname "$SOURCE" )" && pwd )"
    SOURCE="$(readlink "$SOURCE")"
    # if $SOURCE was a relative symlink, we need to resolve it relative to the path where the symlink file was located
    [[ $SOURCE != /* ]] && SOURCE="$DIR/$SOURCE"
  done
  DIR="$( cd -P "$( dirname "$SOURCE" )" && pwd )"
  echo $DIR
}

function get_pkl_binary_url() {
  local URL ARCH VERSION
  # Get the current version of pkl by tracing the 'latest' pkl release
  #   All this does is get the version field from the url
  VERSION=$(curl -Ls -o /dev/null -w "%{url_effective}" "https://github.com/apple/pkl/releases/latest" | awk -F '/' '{ print $NF }')
  URL="https://github.com/apple/pkl/releases/download/$VERSION"
  ARCH=$(uname -m)
  # OSTYPE is the env var for the operating system
  if [ "$ARCH" = "x86_64" ] && [ "$OSTYPE" = "linux-gnu" ]; then
    URL="$URL/pkl-linux-amd64"
  elif [ "$ARCH" = "aarch64" ] && [ "$OSTYPE" = "linux-gnu" ]; then
    URL="$URL/pkl-linux-aarch64"
  elif [ "$ARCH" = "x86_64" ] && [ "$OSTYPE" = "darwin" ]; then
    URL="$URL/pkl-macos-amd64"
  elif [ "$ARCH" = "aarch64" ] && [ "$OSTYPE" = "darwin" ]; then
    URL="$URL/pkl-macos-aarch64"
  elif [ "$ARCH" = "x86_64" ] && [ "$OSTYPE" = "alpine" ]; then
    URL="$URL/pkl-alpine-linux-amd64"
  else
    echo -e "$(echo_red "Unsupported:") Combination $OSTYPE-$ARCH is not supported"
    exit 1
  fi
  echo "$URL"
}

function write_env_vars() {
  {
    echo -e "\n";
    echo "# CMPUT 429 Environment variables";
    echo "export C429_RESOURCES=$( get_script_location )";
    echo -e "export GEM_PATH=\$C429_RESOURCES/gem5";
    echo -e "export GEM_CONFIGS=\$C429_RESOURCES/gem5/configs";
    echo -e "export GEM_TESTS=\$C429_RESOURCES/gem5/tests";
    echo -e "export GEM5_CONFIG=\$C429_RESOURCES/local_resources/sources.json";
    echo -e "export CC=gcc-11";
    echo -e "export CXX=g++-11";
    echo -e "alias gem5=\$GEM_PATH/build/RISCV/gem5.opt";
  } >> "$1"
}

function test_env_vars() {
  local PRESENT="$C429_RESOURCES$GEM_PATH$GEM_CONFIGS$GEM_TESTS$GEM5_CONFIG$CC$CXX"
  if [[ "$PRESENT" == "" ]]; then
    echo "0"
    return
  fi
  echo "1"
}

########## Prettification ###########
RED="\033[0;91m"
GREEN="\033[0;92m"
YEL="\033[0;93m"
BLUE="\033[0;94m"
PPL="\033[0;35m"
CLR="\033[0m"

function echo_red() {
  echo -e "$RED$1$CLR$2"
}

function echo_green() {
  echo -e "$GREEN$1$CLR$2"
}

function echo_purple() {
  echo -e "$PPL$1$CLR$2"
}

function echo_blue() {
  echo -e "$BLUE$1$CLR$2"
}

########### GLOBALS ###############
TEST=0
GIT=0
COMPILE=0
INSTALL_DEPS=0

########### MAIN ##################

# echo "$(get_script_location) == $C429_RESOUCES"

while getopts ":htgci" option; do
  case $option in
    h)
      help
      exit 0 ;;
    t) TEST=1 ;;
    c) COMPILE=1 ;;
    i) INSTALL_DEPS=1 ;;
    *) 
      echo_red "Invalid usage: " "available flags listed below"
      help 
      exit 1 ;;
  esac
done

# Shell configuration
if [[ "$TEST" == "0" ]]; then
  SHELL_FILE=".$(basename "$SHELL")rc"
  echo -e "$(echo_blue "Backing up:") $HOME$SHELL_FILE to $HOME/$SHELL_FILE.backup"
  echo

  cp "$HOME/$SHELL_FILE" "$HOME/$SHELL_FILE.backup"

  echo -e "$(echo_green "Testing:") presence of env vars"
  ENV_VARS_PRESENT="$(test_env_vars)"

  if [[ "$ENV_VARS_PRESENT" == "0" ]]; then
    echo_blue "Writing environment variables..."
    echo -e "$(echo_red "Warning:") This will modify your $SHELL_FILE"
    echo

    write_env_vars "$HOME/.$(basename $SHELL)rc"
  else
    echo
    echo -e "$(echo_red "Error:") Some environment variables are already configured on your system"
    echo -e "         please consult the program help to see which ones we need to configure"
    echo -e "         and either unset them or manually configure your system."
    echo -e "         You may consult ./setup -h for more details."
    echo
  fi

  # gem5 resources local configuration
  echo -e "$(echo_blue "Downloading:") PKL, configuration as code (pkl-lang.org) from $(get_pkl_binary_url)"
  echo

  curl -L -o pkl -s "$(get_pkl_binary_url)"
  chmod +x pkl
  echo -e "$(echo_green "Success:") Downloaded pkl. Version: $(./pkl --version)"
  echo

  echo_blue "Writing the pkl files"
  echo
  ./pkl -v eval local_resources/polybench.pkl -p resources_dir="$(get_script_location)" > "$(get_script_location)/local_resources/polybench.json"
  ./pkl eval local_resources/resources.pkl -p resources_dir="$(get_script_location)" > "$(get_script_location)/local_resources/resources.json"
  ./pkl eval local_resources/sources.pkl   -p resources_dir="$(get_script_location)" > "$(get_script_location)/local_resources/sources.json"

  echo -e "$(echo_red "Removing:") PKL"
  echo
  rm pkl

  echo_green "Remember to source your shell again!"
fi

# Dependencies installation if required
if [[ "$INSTALL_DEPS" == "1" ]]; then
  if [[ "$(hostname)" =~ ^"ug" ]]; then
    echo -e "$(echo_red "Warning:") this is not necessary on the lab machines"  
    echo
  fi

  sudo apt install build-essential git m4 scons zlib1g zlib1g-dev \
    libprotobuf-dev protobuf-compiler libprotoc-dev libgoogle-perftools-dev \
    python3-dev libboost-all-dev pkg-config python3-tk

else
  echo_green "Skipping deps:" " If you require installation of dependencies, rerun with -i" 
fi

# Compile gem5 if required
if [[ "$COMPILE" == "1" ]]; then
  echo "$(echo_green "Compiling:") we strongly recommend that this be done in a tmux session."
  echo "$(echo_green "Compiling:") we will now compile gem5 if no action is taken."
  sleep 5
  echo "$(echo_green "Compiling:") no action is being taken, proceeding with compilation" 

  BASE_DIR=$(get_script_location)
  cd "$BASE_DIR/gem5" || exit 1
  PYTHON_CONFIG="$BASE_DIR/python3.13-config" scons build/RISCV/gem5.opt
else
  echo -e "$(echo_green "Skipping Compilation:") If you require gem5 compilation, please run the script with the -c option"
fi
