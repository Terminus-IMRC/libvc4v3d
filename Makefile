all:

TARGET := libvc4v3d.so libvc4v3d.a
SRCS := v3d.c v3d_rw.c v3d_reset.c v3d_utils.c
OBJS := $(SRCS:%.c=%.c.o)
DEPS := $(SRCS:%.c=%.c.d)
ALLDEPS = $(MAKEFILE_LIST_SANS_DEPS)
CFLAGS_LOCAL := -Wall -Wextra -O2 -g
LDLIBS_LOCAL := -lbcm_host
ARFLAGS := cr

CC := gcc
AR := ar
RANLIB := ranlib
RM := rm -f

VALID_MAKECMDGOALS := all $(TARGET) %.c.d %.c.o clean
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

COMPILE.o = $(CC) $(CFLAGS) $(CFLAGS_LOCAL) $(EXTRACFLAGS) $(CPPFLAGS) $(EXTRACPPFLAGS) $(TARGET_ARCH) -shared
COMPILE.c = $(CC) $(CFLAGS) $(CFLAGS_LOCAL) $(EXTRACFLAGS) $(CPPFLAGS) $(EXTRACPPFLAGS) $(TARGET_ARCH) -c
COMPILE.d = $(CC) $(CFLAGS) $(CFLAGS_LOCAL) $(EXTRACFLAGS) $(CPPFLAGS) $(EXTRACPPFLAGS) $(TARGET_ARCH) -M -MP -MT $<.o -MF $@

all: $(TARGET)

%.a: $(OBJS) $(ALLDEPS)
	$(AR) $(ARFLAGS) $@ $(OBJS)
	$(RANLIB) $@

%.so: $(OBJS) $(ALLDEPS)
	$(COMPILE.o) $(OUTPUT_OPTION) $(OBJS) $(LOADLIBES) $(LDLIBS) $(LDLIBS_LOCAL)

%.c.o: %.c $(ALLDEPS)
	$(COMPILE.c) $(OUTPUT_OPTION) $<

%.c.d: %.c $(ALLDEPS)
	$(COMPILE.d) $<

.PHONY: clean
clean:
	$(RM) $(TARGET)
	$(RM) $(OBJS)
	$(RM) $(DEPS)
