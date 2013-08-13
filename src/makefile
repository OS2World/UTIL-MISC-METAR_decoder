INCPATH = $(%WATCOM)\H\$(PLATFORM);$(%WATCOM)\H

CFLAGS = -i=$(INCPATH) -q -bt=os2 -s -d0

LIBPATH = ..\..\lib\$(PLATFORM)

OBJS = ANTOI.obj CHARCMP.obj DCDMETAR.obj DCDMTRMK.obj
OBJS += FRACPART.obj PRTDMETR.obj STSPACK2.obj STSPACK3.obj

metardec.exe: $(OBJS) metardec.obj
  wlink file {$(OBJS:.obj=) metardec} name $*

DRVMETAR.EXE: $(OBJS) DRVMETAR.obj
  wlink file {$(OBJS:.obj=) DRVMETAR} name $*

.c.obj:
  wcc386 $(CFLAGS) $<

clean: .SYMBOLIC
    @if exist dcdmetar.exe del dcdmetar.exe
    @if exist *.obj del *.obj
    @if exist *.err del *.err
