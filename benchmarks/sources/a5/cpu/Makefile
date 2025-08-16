# === Configuration ===
CC      ?= gcc
GEM5    ?= $(HOME)/gem5
CFLAGS  := -DM_DIM=256 -DK_DIM=256 -DN_DIM=256 -DGEM5 -Wall -Wextra -O3 -I$(GEM5)/include
LDFLAGS := -L$(GEM5)/util/m5/build/riscv/out -lm5

SCALAR_CFLAGS := -march=rv64imafdc_zicsr_zifencei_zaamo_zalrsc -mabi=lp64d
VEC_CFLAGS    := -march=rv64imafvdc_zicsr_zifencei_zaamo_zalrsc -mabi=lp64d -DVECTORIZED

UNOPT_CFLAGS := $(CFLAGS) -fno-tree-vectorize
OPT_CFLAGS   := $(CFLAGS) -ftree-vectorize

# === Sources ===
NAIVE                := -DNAIVE_GEMM matmul.c
INTERCHANGE          := -DINTERCHANGE_GEMM matmul.c
INTERCHANGE_BLOCKING := -DINTERCHANGE_BLOCKING_GEMM matmul.c

# === Targets ===
TARGETS := \
  riscv-vectorized-interchange-matmul \
  riscv-vectorized-interchange-blocking-matmul \
  riscv-vectorized-naive-matmul \
  riscv-scalar-interchange-matmul \
  riscv-scalar-interchange-blocking-matmul \
  riscv-scalar-naive-matmul

# Map target names to sources
riscv-vectorized-interchange-matmul_SRC          := $(INTERCHANGE)
riscv-vectorized-interchange-blocking-matmul_SRC := $(INTERCHANGE_BLOCKING)
riscv-vectorized-naive-matmul_SRC                := $(NAIVE)

riscv-scalar-interchange-matmul_SRC                     := $(INTERCHANGE)
riscv-scalar-interchange-blocking-matmul_SRC            := $(INTERCHANGE_BLOCKING)
riscv-scalar-naive-matmul_SRC                           := $(NAIVE)

# Map target names to flags
riscv-vectorized-%_CFLAGS := $(VEC_CFLAGS) $(OPT_CFLAGS)
riscv-scalar-%_CFLAGS := $(SCALAR_CFLAGS) $(UNOPT_CFLAGS)
VECTOR         := riscv-vectorized-transpose-matmul \
                  riscv-vectorized-interchange-matmul \
                  riscv-vectorized-interchange-blocking-matmul \
                  riscv-vectorized-naive-matmul

SCALAR         := riscv-scalar-transpose-matmul \
                  riscv-scalar-interchange-matmul \
                  riscv-scalar-interchange-blocking-matmul \
                  riscv-scalar-naive-matmul

$(foreach t,$(VECTOR),$(eval $(t)_CFLAGS := $(VEC_CFLAGS) $(OPT_CFLAGS)))
$(foreach t,$(SCALAR),$(eval $(t)_CFLAGS := $(SCALAR_CFLAGS) $(UNOPT_CFLAGS)))
# === Rules ===

all: $(TARGETS:%=%.riscv)

%.riscv:
	$(CC) $($*_CFLAGS) $($*_SRC) -o $@ $(LDFLAGS)

clean:
	rm -f *.riscv *.o

.PHONY: all clean

