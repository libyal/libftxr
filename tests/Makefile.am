AM_CPPFLAGS = \
	-I$(top_srcdir)/include \
	-I$(top_srcdir)/common \
	@LIBCSTRING_CPPFLAGS@ \
	@LIBCERROR_CPPFLAGS@ \
	@LIBFTXR_DLL_IMPORT@

TESTS = \
	test_api_functions.sh

check_SCRIPTS = \
	test_api_functions.sh \
	test_runner.sh

EXTRA_DIST = \
	$(check_SCRIPTS)

check_PROGRAMS = \
	ftxr_test_get_version

ftxr_test_get_version_SOURCES = \
	ftxr_test_get_version.c \
	ftxr_test_libcstring.h \
	ftxr_test_libftxr.h \
	ftxr_test_unused.h

ftxr_test_get_version_LDADD = \
	../libftxr/libftxr.la \
	@LIBCSTRING_LIBADD@

MAINTAINERCLEANFILES = \
	Makefile.in

distclean: clean
	/bin/rm -f Makefile

