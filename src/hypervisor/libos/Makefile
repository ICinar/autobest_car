# Makefile
#
# libos/Makefile
#
# azuepke, 2013-11-26: initial
# azuepke, 2014-05-04: moved to root level and renamed to libos

TOP = ..

include ../rules.mk
include ../rules-$(FOOBAR_RULESET).mk
include ../kernel/arch/$(ARCH)/$(SUBARCH)-$(FOOBAR_RULESET).mk

vpath %.c .
vpath %.S .

INCLUDES  = -nostdinc
INCLUDES += -Iinclude
INCLUDES += -I$(TOP)/autosar/Common
INCLUDES += -I$(TOP)/kernel/include
INCLUDES += -I$(TOP)/kernel/arch/$(ARCH)/include


CFLAGS += -D__LIBOS \
          $(INCLUDES) \
          $(ARCH_USER_CFLAGS)
AFLAGS += $(INCLUDES) \
          $(ARCH_USER_AFLAGS)


# Debug settings
ifeq ("$(DEBUG)", "no")
CFLAGS += -DNDEBUG $(ARCH_CFLAGS_NDEBUG)
AFLAGS += -DNDEBUG
else
CFLAGS += -g $(ARCH_CFLAGS_DEBUG)
AFLAGS +=
endif

# libos modules

ifeq ($(VLE),yes)
MODS = crt0osek_$(ARCH)_vle
else
MODS = crt0osek_$(ARCH)
endif

MODS += _start \
       ActivateTask TerminateTask ChainTask Schedule GetTaskID \
       GetTaskState GetISRID \
       DisableAllInterrupts EnableAllInterrupts \
       SuspendAllInterrupts ResumeAllInterrupts \
       SuspendOSInterrupts ResumeOSInterrupts \
       SetEvent GetEvent WaitEvent ClearEvent WaitGetClearEvent \
       StartOS ShutdownOS GetActiveApplicationMode \
       GetAlarmBase GetAlarm SetRelAlarm SetAbsAlarm CancelAlarm \
       IncrementCounter GetCounterValue GetElapsedValue \
       StartScheduleTableRel StartScheduleTableAbs StopScheduleTable \
       NextScheduleTable StartScheduleTableSynchron SyncScheduleTable \
       SetScheduletableAsync GetScheduleTableStatus \
       GetResource ReleaseResource \
       ErrorHook ProtectionHook ShutdownHook \
       _OsRaiseError _OsExceptionHook _OsAsyncErrors \
       _OsTaskCleanup _OsIsrCleanup _OsCleanupResourceLockState

OBJS = $(addprefix .,$(addsuffix .o,$(MODS))) .libos_buildid.o
DEPS = $(addprefix .,$(addsuffix .d,$(MODS)))

.PHONY: all clean distclean .FORCE

all: libos.a

libos.a: $(OBJS)
	@echo "  AR    $@"
	$(Q)$(AR) cr $@ $^

# autogenerated files
libos_buildid.c: $(filter-out .libos_buildid.o, $(OBJS))
	@echo "  GEN   $@"
	$(Q)echo "/* libos_buildid.c */" >$@
	$(Q)echo "/* GENERATED BY MAKEFILE -- DO NOT EDIT */" >>$@
	$(Q)echo "const char __libos_buildid[] = \"$(BUILDID)\";" >>$@

clean:
	$(Q)rm -f $(OBJS) libos_buildid.c libos.a

distclean: clean
	$(Q)rm -f $(DEPS)

# pull in dependencies
ifeq ("$(filter $(MAKECMDGOALS), clean distclean)", "")
-include $(DEPS)
endif
