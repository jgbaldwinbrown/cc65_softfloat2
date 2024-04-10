
PROCESSOR_H = ../../../processors/6502-CC65.h
SOFTFLOAT_MACROS = ../cc65_softfloat-macros

OBJ = .o
EXE = .exe
INCLUDES = -I. -I..
COMPILE_C = cl65 -c -o $@ $(INCLUDES) -O
LINK = cl65 -o $@
# COMPILE_C = cc65 -o $@ $(INCLUDES) -O
# LINK = ld65 -o $@

ALL: softfloat$(OBJ) testsoftfloat$(EXE)

milieu.h: $(PROCESSOR_H)
	touch milieu.h

softfloat$(OBJ): milieu.h softfloat.h softfloat-specialize $(SOFTFLOAT_MACROS) ../cc65_softfloat.c
	$(COMPILE_C) ../cc65_softfloat.c

timesoftfloat$(OBJ): milieu.h softfloat.h ../cc65_timesoftfloat.c
	$(COMPILE_C) ../cc65_timesoftfloat.c

timesoftfloat$(EXE): softfloat$(OBJ) timesoftfloat$(OBJ)
	$(LINK) softfloat$(OBJ) timesoftfloat$(OBJ)

testsoftfloat$(OBJ): milieu.h softfloat.h ../cc65_testsoftfloat.c
	$(COMPILE_C) ../cc65_testsoftfloat.c

testsoftfloat$(EXE): softfloat$(OBJ) testsoftfloat$(OBJ)
	$(LINK) softfloat$(OBJ) testsoftfloat$(OBJ)

