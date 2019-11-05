# cortexa8.mk -- for Cortex A8 (always little endian)
#
# ARM architecture specific build rules
#
# azuepke, 2014-05-06: cloned from a15.mk


_ARCH_MCPU := -mcpu=cortex-a8

ARCH_CFLAGS := -mabi=aapcs-linux
ARCH_CFLAGS += -mthumb
ARCH_CFLAGS += $(_ARCH_MCPU) -DARM_MMU -DARM_CORTEXA8 -DARM_VFP32

ARCH_CFLAGS_DEBUG := # -O
ARCH_CFLAGS_NDEBUG := -O2 -fomit-frame-pointer
ARCH_AFLAGS := -Wa,-mthumb -Wa,-mimplicit-it=always
ARCH_AFLAGS += $(_ARCH_MCPU) -DARM_MMU -DARM_CORTEXA8 -DARM_VFP32
# for relocatable linking
ARCH_LDFLAGS := $(call ld-option,-marmelf,-marmelf_linux_eabi)

ARCH_MODS := entry exception mmu
ARCH_MODS_SMP :=


# Recommended user compiler and linker flags
ARCH_USER_CFLAGS := -mthumb
ARCH_USER_CFLAGS += $(_ARCH_MCPU)
ARCH_USER_AFLAGS := -Wa,-mthumb -Wa,-mimplicit-it=always
ARCH_USER_AFLAGS += $(_ARCH_MCPU)
# for relocatable linking
ARCH_USER_LDFLAGS := $(call ld-option,-marmelf,-marmelf_linux_eabi)
