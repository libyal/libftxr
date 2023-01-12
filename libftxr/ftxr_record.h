/*
 * The TxR record definition
 *
 * Copyright (C) 2011-2023, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#if !defined( _FTXR_RECORD_H )
#define _FTXR_RECORD_H

#include <common.h>
#include <types.h>

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct ftxr_record_header ftxr_record_header_t;

struct ftxr_record_header
{
	/* Unknown
	 * Consists of 4 bytes
	 */
	uint8_t unknown1[ 4 ];

	/* The record type
	 * Consists of 2 bytes
	 */
	uint8_t record_type[ 2 ];

	/* Unknown
	 * Consists of 2 bytes
	 */
	uint8_t unknown2[ 2 ];

	/* The file identifier
	 * Consists of 8 bytes
	 */
	uint8_t file_identifier[ 8 ];

	/* file reference
	 * Consists of 8 bytes
	 */
	uint8_t file_reference[ 8 ];

	/* Unknown
	 * Consists of 4 bytes
	 */
	uint8_t unknown4[ 4 ];

	/* Unknown
	 * Consists of 4 bytes
	 */
	uint8_t unknown5[ 4 ];

	/* Unknown GUID/UUID
	 * Consists of 16 bytes
	 */
	uint8_t unknown6[ 16 ];

	/* Unknown
	 * Consists of 8 bytes
	 */
	uint8_t unknown7[ 8 ];

	/* Unknown filetime
	 * Consists of 8 bytes
	 */
	uint8_t unknown8[ 8 ];

	/* THe record size
	 * Consists of 4 bytes
	 */
	uint8_t record_size[ 4 ];

	/* Unknown
	 * Consists of 4 bytes
	 */
	uint8_t unknown9[ 4 ];

	/* Unknown
	 * Consists of 8 bytes
	 */
	uint8_t unknown10[ 8 ];
};

#if defined( __cplusplus )
}
#endif

#endif /* !defined( _FTXR_RECORD_H ) */

