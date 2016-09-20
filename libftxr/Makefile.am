AM_CPPFLAGS = \
	-I$(top_srcdir)/include \
	-I$(top_srcdir)/common \
	@LIBCSTRING_CPPFLAGS@ \
	@LIBCERROR_CPPFLAGS@ \
	@LIBCNOTIFY_CPPFLAGS@ \
	@LIBUNA_CPPFLAGS@ \
	@LIBFDATETIME_CPPFLAGS@ \
	@LIBFGUID_CPPFLAGS@ \
	@LIBFUSN_CPPFLAGS@


lib_LTLIBRARIES = libftxr.la

libftxr_la_SOURCES = \
	ftxr_record.h \
	libftxr.c \
	libftxr_debug.c libftxr_debug.h \
	libftxr_definitions.h \
	libftxr_extern.h \
	libftxr_error.c libftxr_error.h \
	libftxr_libcerror.h \
	libftxr_libcnotify.h \
	libftxr_libcstring.h \
	libftxr_libfdatetime.h \
	libftxr_libfguid.h \
	libftxr_libfusn.h \
	libftxr_libuna.h \
	libftxr_record.c libftxr_record.h \
	libftxr_support.c libftxr_support.h \
	libftxr_types.h

libftxr_la_LIBADD = \
	@LIBCSTRING_LIBADD@ \
	@LIBCERROR_LIBADD@ \
	@LIBCNOTIFY_LIBADD@ \
	@LIBUNA_LIBADD@ \
	@LIBFDATETIME_LIBADD@ \
	@LIBFGUID_LIBADD@ \
	@LIBFUSN_LIBADD@

libftxr_la_LDFLAGS = -no-undefined -version-info 1:0:0

EXTRA_DIST = \
	libftxr_definitions.h.in \
	libftxr.rc \
	libftxr.rc.in

MAINTAINERCLEANFILES = \
	Makefile.in

distclean: clean
	/bin/rm -f libftxr_definitions.h
	/bin/rm -f libftxr.rc
	/bin/rm -f Makefile

splint:
	@echo "Running splint on libftxr ..."
	-splint -preproc -redef $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(libftxr_la_SOURCES)
