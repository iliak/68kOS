A = vasmm68k_mot -Fhunk -spaces -nosym -quiet
C = vc -c -c99 -O1 -sc
# D = del /F /Q /S
# P = py -3

SRCDIR = src/
OBJDIR = obj


.PHONY: clean

VPATH = $(SRCDIR)

#
#define the source files
SRC = $(wildcard $(SRCDIR)*.s)  $(wildcard $(SRCDIR)*.c)
# SRC = start.s colorbars.s blink.c test.c

#OBJ = $(SRC:.*=.o) $(SRC:.s=.o)
OBJ = $(SRC:.c=.o) $(SRC:.s=.o)


all:      $(OBJ)
	@echo #
	@echo #
	@echo Building exec.library...

clean:
#	@del *.log
#	@$(RM) $(OBJDIR)\*.*
	@if EXIST $(OBJDIR) rd /S /Q $(OBJDIR)


# ASM
%.o: %.s
	@if NOT EXIST $(OBJDIR) mkdir $(OBJDIR)
	$(A) -o $(OBJDIR)/$(@F) $<

# C
%.o: %.c
	@if NOT EXIST $(OBJDIR) mkdir $(OBJDIR)
	$(C) -o $(OBJDIR)/$(@F) $<


