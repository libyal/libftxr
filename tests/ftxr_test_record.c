/*
 * Library record type testing program
 *
 * Copyright (C) 2011-2016, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <common.h>
#include <file_stream.h>
#include <types.h>

#if defined( HAVE_STDLIB_H ) || defined( WINAPI )
#include <stdlib.h>
#endif

#include "ftxr_test_libftxr.h"
#include "ftxr_test_libcerror.h"
#include "ftxr_test_macros.h"
#include "ftxr_test_memory.h"
#include "ftxr_test_unused.h"

/* Tests the libftxr_record_initialize function
 * Returns 1 if successful or 0 if not
 */
int ftxr_test_record_initialize(
     void )
{
	libftxr_record_t *record = NULL;
	libcerror_error_t *error = NULL;
	int result               = 0;

	/* Test libftxr_record_initialize without entries
	 */
	result = libftxr_record_initialize(
	          &record,
	          &error );

	FTXR_TEST_ASSERT_EQUAL_INT(
	 "result",
	 result,
	 1 );

        FTXR_TEST_ASSERT_IS_NOT_NULL(
         "record",
         record );

        FTXR_TEST_ASSERT_IS_NULL(
         "error",
         error );

	result = libftxr_record_free(
	          &record,
	          &error );

	FTXR_TEST_ASSERT_EQUAL_INT(
	 "result",
	 result,
	 1 );

        FTXR_TEST_ASSERT_IS_NULL(
         "record",
         record );

        FTXR_TEST_ASSERT_IS_NULL(
         "error",
         error );

	/* Test error cases
	 */
	result = libftxr_record_initialize(
	          NULL,
	          &error );

	FTXR_TEST_ASSERT_EQUAL_INT(
	 "result",
	 result,
	 -1 );

        FTXR_TEST_ASSERT_IS_NOT_NULL(
         "error",
         error );

	libcerror_error_free(
	 &error );

	record = (libftxr_record_t *) 0x12345678UL;

	result = libftxr_record_initialize(
	          &record,
	          &error );

	FTXR_TEST_ASSERT_EQUAL_INT(
	 "result",
	 result,
	 -1 );

        FTXR_TEST_ASSERT_IS_NOT_NULL(
         "error",
         error );

	libcerror_error_free(
	 &error );

	record = NULL;

#if defined( HAVE_FTXR_TEST_MEMORY )

	/* Test libftxr_record_initialize with malloc failing
	 */
	ftxr_test_malloc_attempts_before_fail = 0;

	result = libftxr_record_initialize(
	          &record,
	          &error );

	if( ftxr_test_malloc_attempts_before_fail != -1 )
	{
		ftxr_test_malloc_attempts_before_fail = -1;
	}
	else
	{
		FTXR_TEST_ASSERT_EQUAL_INT(
		 "result",
		 result,
		 -1 );

		FTXR_TEST_ASSERT_IS_NULL(
		 "record",
		 record );

		FTXR_TEST_ASSERT_IS_NOT_NULL(
		 "error",
		 error );

		libcerror_error_free(
		 &error );
	}
	/* Test libftxr_record_initialize with memset failing
	 */
	ftxr_test_memset_attempts_before_fail = 0;

	result = libftxr_record_initialize(
	          &record,
	          &error );

	if( ftxr_test_memset_attempts_before_fail != -1 )
	{
		ftxr_test_memset_attempts_before_fail = -1;
	}
	else
	{
		FTXR_TEST_ASSERT_EQUAL_INT(
		 "result",
		 result,
		 -1 );

		FTXR_TEST_ASSERT_IS_NULL(
		 "record",
		 record );

		FTXR_TEST_ASSERT_IS_NOT_NULL(
		 "error",
		 error );

		libcerror_error_free(
		 &error );
	}
#endif /* defined( HAVE_FTXR_TEST_MEMORY ) */

	return( 1 );

on_error:
	if( error != NULL )
	{
		libcerror_error_free(
		 &error );
	}
	if( record != NULL )
	{
		libftxr_record_free(
		 &record,
		 NULL );
	}
	return( 0 );
}

/* Tests the libftxr_record_free function
 * Returns 1 if successful or 0 if not
 */
int ftxr_test_record_free(
     void )
{
	libcerror_error_t *error = NULL;
	int result               = 0;

	/* Test error cases
	 */
	result = libftxr_record_free(
	          NULL,
	          &error );

	FTXR_TEST_ASSERT_EQUAL_INT(
	 "result",
	 result,
	 -1 );

        FTXR_TEST_ASSERT_IS_NOT_NULL(
         "error",
         error );

	libcerror_error_free(
	 &error );

	return( 1 );

on_error:
	if( error != NULL )
	{
		libcerror_error_free(
		 &error );
	}
	return( 0 );
}

/* The main program
 */
#if defined( HAVE_WIDE_SYSTEM_CHARACTER )
int wmain(
     int argc FTXR_TEST_ATTRIBUTE_UNUSED,
     wchar_t * const argv[] FTXR_TEST_ATTRIBUTE_UNUSED )
#else
int main(
     int argc FTXR_TEST_ATTRIBUTE_UNUSED,
     char * const argv[] FTXR_TEST_ATTRIBUTE_UNUSED )
#endif
{
	FTXR_TEST_UNREFERENCED_PARAMETER( argc )
	FTXR_TEST_UNREFERENCED_PARAMETER( argv )

	FTXR_TEST_RUN(
	 "libftxr_record_initialize",
	 ftxr_test_record_initialize );

	FTXR_TEST_RUN(
	 "libftxr_record_free",
	 ftxr_test_record_free );

	/* TODO: add test for libftxr_record_read */

	return( EXIT_SUCCESS );

on_error:
	return( EXIT_FAILURE );
}

