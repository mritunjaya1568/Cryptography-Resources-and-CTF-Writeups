$(common-objpfx)elf/tst-filterobj-flt.os: \
 tst-filterobj-flt.c ../include/stdc-predef.h \
 $(common-objpfx)libc-modules.h \
 ../include/libc-symbols.h tst-filterobj-filtee.h

../include/stdc-predef.h:

$(common-objpfx)libc-modules.h:

../include/libc-symbols.h:

tst-filterobj-filtee.h:
