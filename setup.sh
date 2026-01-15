#!/bin/bash

function help() {
  echo_green "Welcome to CMPUT 429"
  echo -e "\tI'm here to help you setup, to do so I will need to:"
  echo -e "\t - Create the following environment variables"
  echo -e "\t   - C429_RESOURCES: The root of this git repo"
  echo -e "\t   - GEM_PATH: The path for gem5"
  echo -e "\t   - GEM_CONFIGS: The path to gem5/configs"
  echo -e "\t   - GEM_TESTS: The path to the gem5 tests"
  echo -e "\t   - GEM5_CONFIG: Our special resources config file"
  echo -e "\t   - CC: The default C compiler (must be gcc-11)"
  echo -e "\t   - CXX: Default C++ compiler (must be g++-11)"
  echo -e "\t   - Write the environment variables to your default shell"
  echo -e "\t      file (.bashrc, .zshrc, etc) if not present"
  echo -e "\t - Configure the local resources on your profile"
  echo -e "\t   - Install pkl (pkl-lang.org) temporarily"
  echo -e "\t   - Compile some configuration files"
  echo -e "\t   - Create an alias to execute gem5 easier"
  echo -e "\t - Test the configuration"
  echo ""
  echo -e "$(echo_blue "Syntax:") $(basename "$0") [options]"
  echo_blue "Additional Options:"
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
  echo "$DIR"
}

function get_gem5_install_path() {
  # TODO: Uglyyyy
  read \
    -p "$(echo_green Installation:) Where would you like to install gem5? to install gem5? (Default: $(get_script_location)/gem5) " \
    -r GEM5_INSTALL_PATH
  echo "${GEM5_INSTALL_PATH:-$(get_script_location)/gem5}"
}

function get_pkl_binary_url() {
  local URL ARCH VERSION
  # Get the current version of pkl by tracing the 'latest' pkl release
  #   All this does is get the version field from the url
  VERSION=$(curl -Ls -o /dev/null -w "%{url_effective}" "https://github.com/apple/pkl/releases/latest" | awk -F '/' '{ print $NF }')

  # Check if we are still up to date
  # if [[ $VERSION != "0.29.0" ]]; then
  #   echo -e "$(echo_yellow "Warning:") New version of PKL available: $VERSION. Please update!"
  #   exit 1
  # fi
  VERSION="0.29.0"

  URL="https://github.com/apple/pkl/releases/download/$VERSION"
  ARCH=$(uname -m)
  # OSTYPE is the env var for the operating system
  if [ "$ARCH" = "x86_64" ] && [ "$OSTYPE" = "linux-gnu" ]; then
    URL="$URL/pkl-linux-amd64"
  # elif [ "$ARCH" = "aarch64" ] && [ "$OSTYPE" = "linux-gnu" ]; then
  #   URL="$URL/pkl-linux-aarch64"
  # elif [ "$ARCH" = "x86_64" ] && [ "$OSTYPE" = "darwin" ]; then
  #   URL="$URL/pkl-macos-amd64"
  # elif [ "$ARCH" = "aarch64" ] && [ "$OSTYPE" = "darwin" ]; then
  #   URL="$URL/pkl-macos-aarch64"
  # elif [ "$ARCH" = "x86_64" ] && [ "$OSTYPE" = "alpine" ]; then
  #   URL="$URL/pkl-alpine-linux-amd64"
  else
    echo -e "$(echo_red "Unsupported:") Combination $OSTYPE-$ARCH is not supported by this script"
    exit 1
  fi
  echo -n "$URL"
}

function write_env_vars() {
  {
    echo -e "\n";
    echo "# CMPUT 429 Environment variables";
    echo "export C429_RESOURCES=$( get_script_location )";
    echo -e "export GEM_PATH=$GEM5_INSTALL_PATH";
    echo -e "export GEM_CONFIGS=\$C429_RESOURCES/gem5/configs",
    echo -e "export GEM_TESTS=\$C429_RESOURCES/gem5/tests",
    echo -e "export GEM5_CONFIG=\$C429_RESOURCES/benchmarks/sources.json";
    echo -e "export GEM5_RESOURCE_DIR=\$GEM_PATH/.gem5-resources";
    echo -e "export CC=gcc-11";
    echo -e "export CXX=g++-11";
    echo -e "alias gem5=\$GEM_PATH/build/ALL/gem5.opt";
  } >> "$1"
}

function test_env_vars() {
  local PRESENT="$C429_RESOURCES$GEM_PATH$GEM_CONFIGS$GEM_TESTS$GEM5_CONFIG$CC$CXX$GEM5_RESOURCE_DIR"
  if [[ "$PRESENT" == "" ]]; then
    echo "0"
    return
  fi
  echo "1"
}


function download_pkl() {
  local PKL_URL EXPECTED_MD5
  PKL_URL="$(get_pkl_binary_url)"
  EXPECTED_MD5="4fd3cee7eff054c6b85642c0d8eae545"

  # Check if pkl file already exists
  if [[ -f "./pkl" ]]; then
    echo -e "$(echo_blue "Found:") PKL file already exists, checking checksum..."
    local CURRENT_MD5
    CURRENT_MD5=$(md5sum ./pkl | cut -d' ' -f1)

    if [[ "$CURRENT_MD5" == "$EXPECTED_MD5" ]]; then
      echo -e "$(echo_green "Success:") PKL checksum verified, skipping download"
      echo
      return
    else
      echo -e "$(echo_yellow "Warning:") PKL checksum mismatch, re-downloading..."
      rm -f ./pkl
    fi
  fi

  # Download pkl
  echo -e "$(echo_blue "Downloading:") PKL, configuration as code (pkl-lang.org) from $PKL_URL"
  echo

  curl -L -o pkl -s "$PKL_URL"
  chmod +x pkl

  # Verify checksum for downloaded file
  local DOWNLOADED_MD5
  DOWNLOADED_MD5=$(md5sum ./pkl | cut -d' ' -f1)

  if [[ "$DOWNLOADED_MD5" == "$EXPECTED_MD5" ]]; then
    echo -e "$(echo_green "Success:") Downloaded pkl. Version: $(./pkl --version)"
    echo
  else
    echo -e "$(echo_red "Error:") PKL checksum verification failed!"
    echo -e "         Expected: $EXPECTED_MD5"
    echo -e "         Got:      $DOWNLOADED_MD5"
    rm -f ./pkl
    exit 1
  fi
}


function install_gem5() {
  return
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

function echo_yellow() {
  echo -e "$YEL$1$CLR$2"
}

function echo_blue() {
  echo -e "$BLUE$1$CLR$2"
}

########### GLOBALS ###############
TEST=0
GIT=0
COMPILE=0
INSTALL_DEPS=0
GEM5_INSTALL_PATH=$( get_gem5_install_path )
GEM5_BRANCH="v25.0.0.0"

########### RUN FUNCTIONS ###########

function configure_shell() {
  SHELL_FILE=".$(basename "$SHELL")rc"
  echo -e "$(echo_blue "Backing up:") $HOME$SHELL_FILE to $HOME/$SHELL_FILE.bak"
  echo

  cp "$HOME/$SHELL_FILE" "$HOME/$SHELL_FILE.bak"

  echo -e "$(echo_green "Testing:") presence of env vars"
  ENV_VARS_PRESENT="$(test_env_vars)"

  if [[ "$ENV_VARS_PRESENT" == "0" ]]; then
    echo_blue "Writing environment variables..."
    echo -e "$(echo_red "Warning:") This will modify your $SHELL_FILE"
    echo

    write_env_vars "$HOME/.$(basename "$SHELL")rc"
  else
    echo
    echo -e "$(echo_red "Error:") Some environment variables are already configured on your system"
    echo -e "         please consult the program help to see which ones we need to configure"
    echo -e "         and either unset them or manually configure your system."
    echo -e "         You may consult ./setup -h for more details."
    echo
  fi
}

function setup_pkl_configuration() {
  download_pkl

  echo_blue "Writing the pkl files"
  echo
  ./pkl eval benchmarks/polybench.pkl -p resources_dir="$(get_script_location)" > "$(get_script_location)/benchmarks/polybench.json"
  ./pkl eval benchmarks/resources.pkl -p resources_dir="$(get_script_location)" > "$(get_script_location)/benchmarks/resources.json"
  ./pkl eval benchmarks/sources.pkl   -p resources_dir="$(get_script_location)" > "$(get_script_location)/benchmarks/sources.json"

  echo_green "Remember to source your shell again!"
}

function handle_dependencies_installation() {
  if [[ "$(hostname)" =~ ^"ug" ]]; then
    echo -e "$(echo_red "Warning:") this is not necessary on the lab machines"
    echo
  fi

  sudo apt install build-essential git m4 scons zlib1g zlib1g-dev \
    libprotobuf-dev protobuf-compiler libprotoc-dev libgoogle-perftools-dev \
    python3-dev libboost-all-dev pkg-config python3-tk
}

function skip_dependencies_installation() {
  echo_green "Skipping deps:" " If you require installation of dependencies, rerun with -i"
}

function setup_gem5_compilation() {
  echo "$(echo_green "Compiling:") cloning the gem5 repo"
  echo
  git clone https://github.com/gem5/gem5.git --depth 1 --branch "$GEM5_BRANCH" \
    "$GEM5_INSTALL_PATH"

  echo "$(echo_green "Compiling:") Opening a tmux session to compile gem5"
  echo "$(echo_green "Compiling:") This does not check for dependencies"
  echo "$(echo_yellow "NOTE:") You are about to enter a tmux session. To exit:"
  echo "$(echo_yellow "      ") - Press CTRL+B, then press D (detach and keep running)"
  echo "$(echo_yellow "      ") - Or press CTRL+C to stop compilation, then type 'exit'"
  echo "$(echo_blue "INFO:") Starting in 5 seconds..."
  sleep 5

  BASE_DIR=$(get_script_location)
  tmux new -s gem5_compilation "bash -c '
    clear
    echo -e \"\033[0;93m========================================\033[0m\"
    echo -e \"\033[0;93m  TMUX SESSION - GEM5 COMPILATION\033[0m\"
    echo -e \"\033[0;93m========================================\033[0m\"
    echo -e \"\033[0;94mTo exit this session:\033[0m\"
    echo -e \"\033[0;94m  • Press CTRL+B, then D (detach)\033[0m\"
    echo -e \"\033[0;94m  • Or CTRL+C then type exit\033[0m\"
    echo -e \"\033[0;93m========================================\033[0m\"
    echo
    echo -e \"\033[0;92mStarting compilation in 3 seconds...\033[0m\"
    sleep 3
    cd \"$GEM5_INSTALL_PATH\" && PYTHON_CONFIG=\"$BASE_DIR/python3.13-config\" M5_OVERRIDE_PY_SOURCE=true CC=gcc-11 CXX=g++-11 nice -n 13 scons build/ALL/gem5.opt
    echo
    echo -e \"\033[0;92mCompilation finished! Press CTRL+B then D to exit, or type exit\033[0m\"
    exec \$SHELL
  '"
  echo
  echo "$(echo_green "Set Up Complete!") You can close this terminal, compilation will complete in the background."
}


function run_main_setup() {
  configure_shell
  setup_pkl_configuration
}

function run_dependencies_setup() {
  if [[ "$INSTALL_DEPS" == "1" ]]; then
    handle_dependencies_installation
  else
    skip_dependencies_installation
  fi
}

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
  run_main_setup
  run_dependencies_setup
  setup_gem5_compilation
fi
