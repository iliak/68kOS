# A = vasmm68k_mot -Fhunk -spaces -nosym -quiet
# C = vc -c -c99 -O1 -sc
# D = del /F /Q /S

SRCDIR = src
OBJDIR = obj

.PHONY: clean


all:
	@echo #
	@echo #
	@echo Building rom header...
	$(A) -o $(OBJDIR)/romheader.o $(SRCDIR)/romheader.s
	@echo Done building rom header !
	@echo #
	@echo #

clean:
	@$(RM) *.log
	@$(RM) $(OBJDIR)\*.*
