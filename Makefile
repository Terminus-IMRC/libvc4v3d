all:

include Makefile.info

TARGETS := $(TARGETS_libvc4v3d)
SRCS := $(SRCS_libvc4v3d)
OBJS := $(OBJS_libvc4v3d)
DEPS := $(DEPS_libvc4v3d)
ALLDEPS := $(ALLDEPS_libvc4v3d)
CFLAGS := $(CFLAGS_libvc4v3d)

CC := gcc
AR := ar
ARFLAGS := cr
RANLIB := ranlib
RM := rm -f

VALID_MAKECMDGOALS := all $(TARGETS) %.c.d %.c.o clean
NONEED_DEP_MAKECMDGOALS := clean

EXTRA_MAKECMDGOALS := $(filter-out $(VALID_MAKECMDGOALS), $(MAKECMDGOALS))
ifneq '$(EXTRA_MAKECMDGOALS)' ''
  $(error No rule to make target `$(word 1, $(EXTRA_MAKECMDGOALS))')
else
  ifeq '$(filter-out $(NONEED_DEP_MAKECMDGOALS), $(MAKECMDGOALS))' '$(MAKECMDGOALS)'
    sinclude $(DEPS)
	else
    ifneq '$(words $(MAKECMDGOALS))' '1'
      $(error Specify only one target if you want to make target which needs no source code dependency)
    endif
  endif
endif

MAKEFILE_LIST_SANS_DEPS := $(filter-out %.c.d, $(MAKEFILE_LIST))

COMPILE.c = $(CC) $(CFLAGS) $(EXTRACFLAGS) $(CPPFLAGS) $(EXTRACPPFLAGS) $(TARGET_ARCH) -c
COMPILE.d = $(CC) $(CFLAGS) $(EXTRACFLAGS) $(CPPFLAGS) $(EXTRACPPFLAGS) $(TARGET_ARCH) -M -MP -MT $<.o -MF $@

all: $(TARGETS)

libvc4v3d.a: $(OBJS) $(ALLDEPS)
	$(AR) $(ARFLAGS) $@ $(OBJS)
	$(RANLIB) $@

%.c.o: %.c $(ALLDEPS)
	$(COMPILE.c) $(OUTPUT_OPTION) $<

%.c.d: %.c $(ALLDEPS)
	$(COMPILE.d) $<

.PHONY: clean
clean:
	$(RM) $(TARGETS)
	$(RM) $(OBJS)
	$(RM) $(DEPS)
