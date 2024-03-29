# Makefile
#
# bsp Makefile
#
# azuepke, 2014-10-24: cloned from qemu-ppc/Makefile

TOP := ../..

include $(TOP)/rules.mk
include $(TOP)/rules-$(FOOBAR_RULESET).mk
include $(TOP)/kernel/arch/$(ARCH)/$(SUBARCH)-$(FOOBAR_RULESET).mk

vpath %.c src ../arch/$(ARCH)/src
vpath %.S src ../arch/$(ARCH)/src

INCLUDES += -nostdinc
INCLUDES += -Iinclude
INCLUDES += -I$(TOP)/kernel/include
INCLUDES += -I$(TOP)/kernel/arch/$(ARCH)/include
INCLUDES += -I../arch/$(ARCH)/include

FEATURES = 

ifeq ($(USE_REAL_SERIAL_HARDWARE),yes)
    FEATURES += USE_REAL_SERIAL_HARDWARE
endif

ifeq ($(USE_LED_TASK),yes)
    FEATURES += USE_LED_TASK
endif

CFLAGS   += -W -Wall -Wshadow -Wpointer-arith -Wcast-qual
CFLAGS   += -Wmissing-prototypes -Wstrict-prototypes
CFLAGS   += -fno-strict-aliasing
CFLAGS   += -fno-common
CFLAGS   += -Werror
CFLAGS   += -D__KERNEL
CFLAGS   += $(addprefix -D,$(FEATURES))
CFLAGS   += $(INCLUDES)
CFLAGS   += $(ARCH_CFLAGS)

AFLAGS += $(INCLUDES)
AFLAGS += $(ARCH_AFLAGS)

MODS = start board tc_irq tc_irq_conf stm_timer wdt mpu scu serial leds traps
ifeq ($(USE_KLDD),yes)
    MODS += bsp_kldd
endif

LDFLAGS := $(ARCH_LDFLAGS)
LDSCRIPT = kernel.ld
LIBS = -L$(TOP)/libgcc -lgcc
KERNEL = $(TOP)/kernel/kernel.o

# dummy configuration that doesn't exist. when linking, we expect to be called
# from the top-level Makefile with CONFIG already set.
CONFIG = configuration

ifeq ("$(DEBUG)", "no")
CFLAGS += -g -DNDEBUG $(ARCH_CFLAGS_NDEBUG)
AFLAGS += -DNDEBUG
else
CFLAGS += -g3 $(ARCH_CFLAGS_DEBUG) -DVERBOSE
AFLAGS +=
endif

ifneq ("$(SMP)", "no")
CFLAGS += -DSMP
AFLAGS += -DSMP
MODS +=
else
CFLAGS +=
AFLAGS +=
endif

OBJS = $(addprefix .,$(addsuffix .o,$(MODS))) .buildid.o
DEPS = $(addprefix .,$(addsuffix .d,$(MODS)))

# Additional flags for real TC27x boards:
CFLAGS += -DAURIX_IRQ -DAURIX_TIMER -DAURIX_WDT

ifeq ($(OS),Windows_NT)
QCMD = $(FOOBAR_QEMU)
QCMD_DEBUG = -S -gdb tcp::1234,ipv4 -serial mon:telnet:127.0.0.1:4444,server,nowait
else
QCMD = xterm -geom 80x60 -hold -e $(FOOBAR_QEMU)
QCMD_DEBUG = -s -S
endif

QARGS = -machine tricore_testboard -cpu aurix -nographic -no-reboot -net none

.PHONY: all dummy_reloc final_reloc clean distclean debug run .FORCE

all: dummy_reloc
dummy_reloc: kernel.dummy.elf
final_reloc: kernel.elf kernel.map kernel.bin

kernel.dummy.elf: $(KERNEL) $(CONFIG) $(OBJS) $(LDSCRIPT)
	@echo "  LD    $@"
	$(Q)$(LD) $(LDFLAGS) -T$(LDSCRIPT) -o $@ $(OBJS) $(KERNEL) $(CONFIG) $(LIBS)

kernel.elf: $(KERNEL) $(CONFIG) $(OBJS) $(LDSCRIPT)
	@echo "  LD    $@"
	$(Q)$(LD) $(LDFLAGS) -T$(LDSCRIPT) -o $@ $(OBJS) $(KERNEL) $(CONFIG) $(LIBS)

kernel.map: kernel.elf
	@echo "  MAP   $@"
	$(Q)$(NM) -n $< > $@

kernel.bin: kernel.elf
	@echo "  BIN   $@"
	$(Q)$(OBJCOPY) -j .text -j .rodata -j .data -Obinary $< $@

# autogenerated files
buildid.c: $(filter-out .buildid.o, $(OBJS)) $(LDSCRIPT)
	@echo "  GEN   $@"
	$(Q)echo "/* buildid.c */" >$@
	$(Q)echo "/* GENERATED BY MAKEFILE -- DO NOT EDIT */" >>$@
	$(Q)echo "const char bsp_buildid[] = \"$(BUILDID)\";" >>$@

# running / debugging
run: $(TOP)/$(BINDIR)/bootfile.elf
	$(QCMD) $(QARGS) -kernel $<

debug: $(TOP)/$(BINDIR)/bootfile.elf
	# Debug session with QEMU
	$(QCMD) $(QARGS) -kernel $< $(QCMD_DEBUG)

autorun: $(TOP)/$(BINDIR)/bootfile.elf
	./autorun.sh $<

# cleanup
thisclean:
	$(Q)rm -f $(OBJS) buildid.c kernel.elf kernel.dummy.elf kernel.bin kernel.map

clean: thisclean

distclean: thisclean
	$(Q)rm -f $(DEPS)

# pull in dependencies
ifeq ("$(filter $(MAKECMDGOALS), clean distclean)", "")
-include $(DEPS)
endif
