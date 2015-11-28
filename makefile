export A = vasmm68k_mot -Fhunk -spaces -nosym -quiet
export C = vc -c -c99 -O1 -sc
export RM = del /F /S /Q
L = vlink -s -brawbin1 -Ttext 0xFC0000

# Python command line
P = py -3

# Rom name
ROMNAME=mimic

#Rom path
ROMDIR=rom


# Path to the source codes
SRCDIR=src

# List of modules to include in the rom
MODULES=libc exec.library romheader

# WinUAE executable & arguments
WINUAE = winuae\winuae.exe
WINUAEARGS = -config=mimic.uae

.PHONY: clean


# !!!!!
# The MOST IMPORTANT thing is that romheader.o IS THE FIRST object to be linked !!!
# !!!!!
all: $(MODULES)
	$(L) -o $(ROMDIR)/$(ROMNAME).bin $(SRCDIR)/romheader/obj/romheader.o $(SRCDIR)/exec.library/obj/*.o
	$(P) $(SRCDIR)/finalizerom.py $(ROMDIR)/$(ROMNAME).bin $(ROMDIR)/$(ROMNAME).rom


# Some clean up...
clean:
	@(cd $(SRCDIR)/romheader && $(MAKE) $@)
	@(cd $(SRCDIR)/exec.library && $(MAKE) $@)
	@$(RM) $(ROMDIR)\$(ROMNAME).*




romheader:
	(cd $(SRCDIR)/romheader && $(MAKE))

libc:
	(cd $(SRCDIR)/libc && $(MAKE))


exec.library:
	(cd $(SRCDIR)/exec.library && $(MAKE))



# Run the emulator
run:
	$(WINUAE) $(WINUAEARGS)
