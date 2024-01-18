$(common-objpfx)posix/streams-compat.o: \
 streams-compat.c ../include/stdc-predef.h \
 $(common-objpfx)libc-modules.h \
 ../include/libc-symbols.h \
 $(common-objpfx)config.h \
 ../sysdeps/generic/libc-symver.h ../sysdeps/generic/symbol-hacks.h \
 ../include/shlib-compat.h \
 $(common-objpfx)abi-versions.h

../include/stdc-predef.h:

$(common-objpfx)libc-modules.h:

../include/libc-symbols.h:

$(common-objpfx)config.h:

../sysdeps/generic/libc-symver.h:

../sysdeps/generic/symbol-hacks.h:

../include/shlib-compat.h:

$(common-objpfx)abi-versions.h:
