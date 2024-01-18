$(common-objpfx)elf/tst-filterobj-aux.os: \
 tst-filterobj-aux.c ../include/stdc-predef.h \
 $(common-objpfx)libc-modules.h \
 ../include/libc-symbols.h tst-filterobj-filtee.h

../include/stdc-predef.h:

$(common-objpfx)libc-modules.h:

../include/libc-symbols.h:

tst-filterobj-filtee.h:
