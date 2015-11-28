A = vasmm68k_mot -Fhunk -spaces -nosym -quiet
C = vc -c -c99 -O1 -sc -D__NOINLINE__
# L = vlink -s 
L = vlink -s -brawbin1


# SRCDIR = stdio stdlib string
OBJDIR = obj


.PHONY: clean

# VPATH = $(SRCDIR)

#
#define the source files
SRC = $(wildcard stdio/*.c)  $(wildcard stdlib/*.c) $(wildcard string/*c)

#OBJ = $(SRC:.*=.o) $(SRC:.s=.o)
OBJ = $(SRC:.c=.o) $(SRC:.s=.o)


all:      $(OBJ)
	@echo #
	@echo #
	@echo Building libc...
	$(L) -o libc.lib $(OBJDIR)/*.o


clean:
#	@del *.log
#	@$(RM) $(OBJDIR)\*.*
	@if EXIST $(OBJDIR) rd /S /Q $(OBJDIR)


stdio:
	@echo $(SRC)


# ASM
# %.o: %.s
	# @if NOT EXIST $(OBJDIR) mkdir $(OBJDIR)
	# $(A) -o $(OBJDIR)/$(@F) $<

# C
%.o: %.c
	@if NOT EXIST $(OBJDIR) mkdir $(OBJDIR)
	$(C) -o $(OBJDIR)/$(@F) $<


