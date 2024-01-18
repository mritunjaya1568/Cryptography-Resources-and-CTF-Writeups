$(common-objpfx)elf/interp.os: \
 interp.c ../include/stdc-predef.h \
 $(common-objpfx)libc-modules.h \
 ../include/libc-symbols.h \
 $(common-objpfx)config.h \
 ../sysdeps/generic/libc-symver.h ../sysdeps/generic/symbol-hacks.h \
 $(common-objpfx)runtime-linker.h

../include/stdc-predef.h:

$(common-objpfx)libc-modules.h:

../include/libc-symbols.h:

$(common-objpfx)config.h:

../sysdeps/generic/libc-symver.h:

../sysdeps/generic/symbol-hacks.h:

$(common-objpfx)runtime-linker.h:
