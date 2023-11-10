include_HEADERS = \
	libftxr.h

pkginclude_HEADERS = \
	libftxr/codepage.h \
	libftxr/definitions.h \
	libftxr/error.h \
	libftxr/extern.h \
	libftxr/features.h \
	libftxr/types.h

EXTRA_DIST = \
	libftxr.h.in \
	libftxr/definitions.h.in \
	libftxr/features.h.in \
	libftxr/types.h.in

MAINTAINERCLEANFILES = \
	Makefile.in

distclean: clean
	-rm -f libftxr.h
	-rm -f libftxr/definitions.h
	-rm -f libftxr/features.h
	-rm -f libftxr/types.h
	-rm -f Makefile

