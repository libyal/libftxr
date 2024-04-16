AM_CPPFLAGS = \
	-I../include -I$(top_srcdir)/include \
	-I../common -I$(top_srcdir)/common \
	@LIBCERROR_CPPFLAGS@ \
	@LIBCNOTIFY_CPPFLAGS@ \
	@LIBUNA_CPPFLAGS@ \
	@LIBFDATETIME_CPPFLAGS@ \
	@LIBFGUID_CPPFLAGS@ \
	@LIBFUSN_CPPFLAGS@ \
	@LIBFTXR_DLL_EXPORT@

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
	libftxr_libfdatetime.h \
	libftxr_libfguid.h \
	libftxr_libfusn.h \
	libftxr_libuna.h \
	libftxr_record.c libftxr_record.h \
	libftxr_support.c libftxr_support.h \
	libftxr_types.h \
	libftxr_unused.h

libftxr_la_LIBADD = \
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

DISTCLEANFILES = \
	libftxr_definitions.h \
	libftxr.rc \
	Makefile \
	Makefile.in

sources-local: $(BUILT_SOURCES)

splint-local:
	@echo "Running splint on libftxr ..."
	-splint -preproc -redef $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(libftxr_la_SOURCES)

