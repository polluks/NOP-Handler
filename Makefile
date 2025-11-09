all: NOP-Handler NOP-Handler_debug NOP-Handler.mos NOP-Handler.os4 NOP-Handler.aros-i386 NOP-handler.aros-i386_debug

NOP-Handler: NOP-Handler.c Startup.c Makefile
	vc +aos68k -nostdlib -O2 -sc -D__NOLIBBASE__ -lvc -o $@ Startup.c $<

NOP-Handler_debug: NOP-Handler.c Startup.c Debug.c Debug.h Makefile
	vc +aos68k -nostdlib -O2 -sc -D__NOLIBBASE__ -D__DEBUG__ -lvc -lamiga -ldebug -o $@ Startup.c $< Debug.c

NOP-Handler.mos: NOP-Handler.c StartupMOS.c Makefile
	vc +morphos -nostdlib -O2 -use-lmw -D__NOLIBBASE__ -lvc -o $@ StartupMOS.c $<

NOP-Handler.os4: NOP-Handler.c StartupOS4.c Makefile
	vc +aosppc -nostdlib -O2 -use-lmw -D__NOLIBBASE__ -D__USE_INLINE__ -lvc -o $@ StartupOS4.c $<

NOP-Handler.aros-i386: NOP-Handler.c StartupAROS.c Makefile
	i386-aros-gcc -nostartfiles -std=gnu99 -O2 -s -D__NOLIBBASE__ -static -o $@ StartupAROS.c $<

NOP-handler.aros-i386_debug: NOP-Handler.c StartupAROS.c Debug.c Debug.h Makefile
	i386-aros-gcc -nostartfiles -std=gnu99 -O2 -s -D__NOLIBBASE__ -D__DEBUG__ -static -o $@ StartupAROS.c $< Debug.c

clean:
	$(RM) NOP-Handler NOP-Handler_debug NOP-Handler.mos NOP-Handler.os4 NOP-Handler.aros-i386 NOP-handler.aros-i386_debug
