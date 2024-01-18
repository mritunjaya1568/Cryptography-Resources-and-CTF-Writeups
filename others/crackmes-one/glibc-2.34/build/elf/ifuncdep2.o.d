$(common-objpfx)elf/ifuncdep2.o: \
 ifuncdep2.c ../include/stdc-predef.h \
 $(common-objpfx)libc-modules.h \
 ../include/libc-symbols.h \
 $(common-objpfx)config.h \
 ../sysdeps/generic/libc-symver.h ../sysdeps/generic/symbol-hacks.h \
 ../sysdeps/generic/ifunc-sel.h

../include/stdc-predef.h:

$(common-objpfx)libc-modules.h:

../include/libc-symbols.h:

$(common-objpfx)config.h:

../sysdeps/generic/libc-symver.h:

../sysdeps/generic/symbol-hacks.h:

../sysdeps/generic/ifunc-sel.h:
