#!/bin/sh
# Script to run tests
#
# Version: 20260609

if test -f ${PWD}/libftxr/.libs/libftxr.1.dylib && test -f ./pyftxr/.libs/pyftxr.so
then
	install_name_tool -change /usr/local/lib/libftxr.1.dylib ${PWD}/libftxr/.libs/libftxr.1.dylib ./pyftxr/.libs/pyftxr.so
fi

make check-build > /dev/null

make check $@
RESULT=$?

if test ${RESULT} -ne 0
then
	find . -name \*.log -path \*.dir/\*/\*.log -print -exec cat {} \;
fi
exit ${RESULT}

