AM_CPPFLAGS = \
	-I$(top_srcdir)/include \
	-I$(top_srcdir)/common \
	@LIBCERROR_CPPFLAGS@ \
	@LIBCNOTIFY_CPPFLAGS@ \
	@LIBUNA_CPPFLAGS@ \
	@LIBFDATETIME_CPPFLAGS@ \
	@LIBFGUID_CPPFLAGS@ \
	@LIBFUSN_CPPFLAGS@ \
	@LIBFTXR_DLL_IMPORT@

TESTS = \
	test_library.sh

check_SCRIPTS = \
	test_library.sh \
	test_manpage.sh \
	test_runner.sh

EXTRA_DIST = \
	$(check_SCRIPTS)

check_PROGRAMS = \
	ftxr_test_error \
	ftxr_test_record \
	ftxr_test_support

ftxr_test_error_SOURCES = \
	ftxr_test_error.c \
	ftxr_test_libftxr.h \
	ftxr_test_macros.h \
	ftxr_test_unused.h

ftxr_test_error_LDADD = \
	../libftxr/libftxr.la

ftxr_test_record_SOURCES = \
	ftxr_test_libcerror.h \
	ftxr_test_libftxr.h \
	ftxr_test_macros.h \
	ftxr_test_memory.c ftxr_test_memory.h \
	ftxr_test_record.c \
	ftxr_test_unused.h

ftxr_test_record_LDADD = \
	../libftxr/libftxr.la \
	@LIBCERROR_LIBADD@

ftxr_test_support_SOURCES = \
	ftxr_test_libftxr.h \
	ftxr_test_macros.h \
	ftxr_test_support.c \
	ftxr_test_unused.h

ftxr_test_support_LDADD = \
	../libftxr/libftxr.la

MAINTAINERCLEANFILES = \
	Makefile.in

distclean: clean
	/bin/rm -f Makefile

