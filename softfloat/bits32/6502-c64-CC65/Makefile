
PROCESSOR_H = ../../../processors/386-GCC.h
SOFTFLOAT_MACROS = ../softfloat-macros

OBJ = .o
EXE = .exe
INCLUDES = -I. -I..
COMPILE_C = cc65 -o $@ $(INCLUDES) -O
LINK = cl65 -o $@

ALL: softfloat$(OBJ) timesoftfloat$(EXE)

milieu.h: $(PROCESSOR_H)
	touch milieu.h

softfloat$(OBJ): milieu.h softfloat.h softfloat-specialize $(SOFTFLOAT_MACROS) ../cc65_softfloat.c
	$(COMPILE_C) ../cc65_softfloat.c

timesoftfloat$(OBJ): milieu.h softfloat.h ../cc65_timesoftfloat.c
	$(COMPILE_C) ../cc65_timesoftfloat.c

timesoftfloat$(EXE): softfloat$(OBJ) timesoftfloat$(OBJ)
	$(LINK) softfloat$(OBJ) timesoftfloat$(OBJ)

