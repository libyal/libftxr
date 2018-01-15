/*
 * Record functions
 *
 * Copyright (C) 2011-2018, Joachim Metz <joachim.metz@gmail.com>
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

#if !defined( _LIBFTXR_INTERNAL_RECORD_H )
#define _LIBFTXR_INTERNAL_RECORD_H

#include <common.h>
#include <types.h>

#include "libftxr_extern.h"
#include "libftxr_libcerror.h"
#include "libftxr_types.h"

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct libftxr_internal_record libftxr_internal_record_t;

struct libftxr_internal_record
{
	/* The size
	 */
	uint32_t size;
};

LIBFTXR_EXTERN \
int libftxr_record_initialize(
     libftxr_record_t **txr_record,
     libcerror_error_t **error );

LIBFTXR_EXTERN \
int libftxr_record_free(
     libftxr_record_t **txr_record,
     libcerror_error_t **error );

LIBFTXR_EXTERN \
int libftxr_record_read(
     libftxr_record_t *txr_record,
     const uint8_t *record_data,
     size_t record_data_size,
     libcerror_error_t **error );

int libftxr_record_read_update_journal_entry_list(
     libftxr_internal_record_t *internal_record,
     const uint8_t *record_data,
     size_t record_data_size,
     libcerror_error_t **error );

#if defined( __cplusplus )
}
#endif

#endif /* !defined( _LIBFTXR_INTERNAL_RECORD_H ) */

