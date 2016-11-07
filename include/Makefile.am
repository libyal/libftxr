include_HEADERS = \
	libftxr.h

pkginclude_HEADERS = \
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
	/bin/rm -f libftxr.h
	/bin/rm -f libftxr/definitions.h
	/bin/rm -f libftxr/features.h
	/bin/rm -f libftxr/types.h
	/bin/rm -f Makefile

