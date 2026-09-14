#!/bin/sh
# Script to run tests
#
# Version: 20260714

if [ -f "${PWD}/libftxr/.libs/libftxr.1.dylib" ] && [ -f ./pyftxr/.libs/pyftxr.so ]
then
    install_name_tool -change /usr/local/lib/libftxr.1.dylib "${PWD}/libftxr/.libs/libftxr.1.dylib" ./pyftxr/.libs/pyftxr.so
fi

make check-build > /dev/null

# shellcheck disable=SC2068
make check $@
RESULT=$?

if [ ${RESULT} -ne 0 ]
then
    find . -name \*.log -path \*.dir/\*/\*.log -print -exec cat {} \;
fi
exit ${RESULT}

