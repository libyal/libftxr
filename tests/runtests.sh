#!/bin/sh
# Script to run tests
#
# Version: 20201121

if test -f ${PWD}/libftxr/.libs/libftxr.1.dylib && test -f ./pyftxr/.libs/pyftxr.so;
then
	install_name_tool -change /usr/local/lib/libftxr.1.dylib ${PWD}/libftxr/.libs/libftxr.1.dylib ./pyftxr/.libs/pyftxr.so;
fi

make check CHECK_WITH_STDERR=1;
RESULT=$?;

if test ${RESULT} -ne 0 && test -f tests/test-suite.log;
then
	cat tests/test-suite.log;
fi
exit ${RESULT};

