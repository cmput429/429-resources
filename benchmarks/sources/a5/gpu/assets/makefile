# --------------------------- Paths & tools ---------------------------
HIP_PATH      ?= /opt/rocm
HIPCC         ?= $(HIP_PATH)/bin/hipcc

# --------------------------- Directories -----------------------------
BIN_DIR       ?= bin
THREAD_DIR    := thread-divergence
# MEM_DIR       := memory-coalesing
# JACOBI_DIR    := jacobi    

# --------------------------- Sources ---------------------------------
THREAD_NAMES  := divergent non_divergent
# MEM_NAMES     := divergent_coalesced non_divergent_coalesced
# JACOBI_NAMES  := jacobi_naive_branch jacobi_naive_hoisted jacobi_sharedx_hoisted jacobi_warp_hoisted
NAMES         := $(THREAD_NAMES) # $(MEM_NAMES) $(JACOBI_NAMES)

# Outputs (per optimization level)
# NOTE: O1 outputs go to base BIN_DIR (bin/); O2/O3 keep subdirs.
LEVELS        := O2 O3
ALL_BINS      := $(foreach L,$(LEVELS),$(NAMES:%=$(BIN_DIR)/$(L)/%)) \
                 $(NAMES:%=$(BIN_DIR)/%)
ALL_ASM       := $(foreach L,$(LEVELS),$(NAMES:%=$(BIN_DIR)/$(L)/%_asm.s)) \
                 $(NAMES:%=$(BIN_DIR)/%_asm.s)
ALL_ASM_G     := $(foreach L,$(LEVELS),$(NAMES:%=$(BIN_DIR)/$(L)/%_asm_g.s)) \
                 $(NAMES:%=$(BIN_DIR)/%_asm_g.s)

# --------------------------- Architecture ----------------------------
OFFLOAD_ARCHS ?= gfx942 gfx90a
OFFLOAD_FLAGS := $(foreach a,$(OFFLOAD_ARCHS),--offload-arch=$(a))

# --------------------------- Flags -----------------------------------
CXXFLAGS := -x hip \
            -I$(GEM_PATH)/include \
            -I$(GEM_PATH)/util/m5/src \
            -I$(GEM_PATH) \
            -DGEM5_FS \
            $(OFFLOAD_FLAGS) \
            -fno-unroll-loops \
            -DGPUFS

# Avoid PIE when linking with non-PIC libm5.a
LDFLAGS  := -L$(GEM_PATH)/util/m5/build/x86/out -lm5 -Wl,-no-pie

# --------------------------- Search path ------------------------------
VPATH := $(THREAD_DIR):$(MEM_DIR):$(JACOBI_DIR):.

# --------------------------- Phony -----------------------------------
.PHONY: all all_asm all_asm_g all_all clean # jacobi jacobi_asm jacobi_asm_g

# --------------------------- Default ---------------------------------
all:       $(ALL_BINS)
all_asm:   $(ALL_ASM)
all_asm_g: $(ALL_ASM_G)
all_all:   all all_asm all_asm_g

# --------------------------- Build: EXEs (.hip) ----------------------
# O1 -> base bin/
$(BIN_DIR)/%: %.hip | $(BIN_DIR)/
	$(HIPCC) $(CXXFLAGS) -O1 $< -o $@ $(LDFLAGS)

# O2/O3 -> subdirs
$(BIN_DIR)/O2/%: %.hip | $(BIN_DIR)/O2
	$(HIPCC) $(CXXFLAGS) -O2 $< -o $@ $(LDFLAGS)

$(BIN_DIR)/O3/%: %.hip | $(BIN_DIR)/O3
	$(HIPCC) $(CXXFLAGS) -O3 $< -o $@ $(LDFLAGS)

# --------------------------- Build: ASM (-S) (.hip) ------------------
# O1 ASM -> base bin/
$(BIN_DIR)/%_asm.s: %.hip | $(BIN_DIR)/
	$(HIPCC) $(CXXFLAGS) -O1 -S $< -o $@

# O2/O3 ASM -> subdirs
$(BIN_DIR)/O2/%_asm.s: %.hip | $(BIN_DIR)/O2
	$(HIPCC) $(CXXFLAGS) -O2 -S $< -o $@

$(BIN_DIR)/O3/%_asm.s: %.hip | $(BIN_DIR)/O3
	$(HIPCC) $(CXXFLAGS) -O3 -S $< -o $@

# --------------------------- Build: ASM+Debug (-g) (.hip) ------------
# O1 ASM+g -> base bin/
$(BIN_DIR)/%_asm_g.s: %.hip | $(BIN_DIR)/
	$(HIPCC) $(CXXFLAGS) -O1 -g -S $< -o $@

# O2/O3 ASM+g -> subdirs
$(BIN_DIR)/O2/%_asm_g.s: %.hip | $(BIN_DIR)/O2
	$(HIPCC) $(CXXFLAGS) -O2 -g -S $< -o $@

$(BIN_DIR)/O3/%_asm_g.s: %.hip | $(BIN_DIR)/O3
	$(HIPCC) $(CXXFLAGS) -O3 -g -S $< -o $@

# --------------------------- Dirs ------------------------------------
$(BIN_DIR)/:
	mkdir -p $@
$(BIN_DIR):
	mkdir -p $@
$(BIN_DIR)/O2:
	mkdir -p $@
$(BIN_DIR)/O3:
	mkdir -p $@

# --------------------------- Clean -----------------------------------
clean:
	rm -rf $(BIN_DIR)
