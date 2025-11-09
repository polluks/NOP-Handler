all: NOP-Handler NOP-Handler_debug

NOP-Handler: NOP-Handler.c Makefile
	vc +aos68k -nostdlib -O2 -sc -D__NOLIBBASE__ -lvc -o $@ $<

NOP-Handler_debug: NOP-Handler.c Debug.h Debug.c Makefile
	vc +aos68k -nostdlib -O2 -sc -D__NOLIBBASE__ -D__DEBUG__ -lvc -lamiga -ldebug -o $@ $< Debug.c

clean:
	$(RM) NOP-Handler NOP-Handler_debug
