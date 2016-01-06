/*
 * Codepage definitions for libftxr
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

#if !defined( _LIBFTXR_CODEPAGE_H )
#define _LIBFTXR_CODEPAGE_H

#include <libftxr/types.h>

#if defined( __cplusplus )
extern "C" {
#endif

/* The codepage definitions
 */
enum LIBFTXR_CODEPAGES
{
	LIBFTXR_CODEPAGE_ASCII				= 20127,

	LIBFTXR_CODEPAGE_ISO_8859_1			= 28591,
	LIBFTXR_CODEPAGE_ISO_8859_2			= 28592,
	LIBFTXR_CODEPAGE_ISO_8859_3			= 28593,
	LIBFTXR_CODEPAGE_ISO_8859_4			= 28594,
	LIBFTXR_CODEPAGE_ISO_8859_5			= 28595,
	LIBFTXR_CODEPAGE_ISO_8859_6			= 28596,
	LIBFTXR_CODEPAGE_ISO_8859_7			= 28597,
	LIBFTXR_CODEPAGE_ISO_8859_8			= 28598,
	LIBFTXR_CODEPAGE_ISO_8859_9			= 28599,
	LIBFTXR_CODEPAGE_ISO_8859_10			= 28600,
	LIBFTXR_CODEPAGE_ISO_8859_11			= 28601,
	LIBFTXR_CODEPAGE_ISO_8859_13			= 28603,
	LIBFTXR_CODEPAGE_ISO_8859_14			= 28604,
	LIBFTXR_CODEPAGE_ISO_8859_15			= 28605,
	LIBFTXR_CODEPAGE_ISO_8859_16			= 28606,

	LIBFTXR_CODEPAGE_KOI8_R				= 20866,
	LIBFTXR_CODEPAGE_KOI8_U				= 21866,

	LIBFTXR_CODEPAGE_WINDOWS_874			= 874,
	LIBFTXR_CODEPAGE_WINDOWS_932			= 932,
	LIBFTXR_CODEPAGE_WINDOWS_936			= 936,
	LIBFTXR_CODEPAGE_WINDOWS_949			= 949,
	LIBFTXR_CODEPAGE_WINDOWS_950			= 950,
	LIBFTXR_CODEPAGE_WINDOWS_1250			= 1250,
	LIBFTXR_CODEPAGE_WINDOWS_1251			= 1251,
	LIBFTXR_CODEPAGE_WINDOWS_1252			= 1252,
	LIBFTXR_CODEPAGE_WINDOWS_1253			= 1253,
	LIBFTXR_CODEPAGE_WINDOWS_1254			= 1254,
	LIBFTXR_CODEPAGE_WINDOWS_1255			= 1255,
	LIBFTXR_CODEPAGE_WINDOWS_1256			= 1256,
	LIBFTXR_CODEPAGE_WINDOWS_1257			= 1257,
	LIBFTXR_CODEPAGE_WINDOWS_1258			= 1258
};

#define LIBFTXR_CODEPAGE_US_ASCII			LIBFTXR_CODEPAGE_ASCII

#define LIBFTXR_CODEPAGE_ISO_WESTERN_EUROPEAN		LIBFTXR_CODEPAGE_ISO_8859_1
#define LIBFTXR_CODEPAGE_ISO_CENTRAL_EUROPEAN		LIBFTXR_CODEPAGE_ISO_8859_2
#define LIBFTXR_CODEPAGE_ISO_SOUTH_EUROPEAN		LIBFTXR_CODEPAGE_ISO_8859_3
#define LIBFTXR_CODEPAGE_ISO_NORTH_EUROPEAN		LIBFTXR_CODEPAGE_ISO_8859_4
#define LIBFTXR_CODEPAGE_ISO_CYRILLIC			LIBFTXR_CODEPAGE_ISO_8859_5
#define LIBFTXR_CODEPAGE_ISO_ARABIC			LIBFTXR_CODEPAGE_ISO_8859_6
#define LIBFTXR_CODEPAGE_ISO_GREEK			LIBFTXR_CODEPAGE_ISO_8859_7
#define LIBFTXR_CODEPAGE_ISO_HEBREW			LIBFTXR_CODEPAGE_ISO_8859_8
#define LIBFTXR_CODEPAGE_ISO_TURKISH			LIBFTXR_CODEPAGE_ISO_8859_9
#define LIBFTXR_CODEPAGE_ISO_NORDIC			LIBFTXR_CODEPAGE_ISO_8859_10
#define LIBFTXR_CODEPAGE_ISO_THAI			LIBFTXR_CODEPAGE_ISO_8859_11
#define LIBFTXR_CODEPAGE_ISO_BALTIC			LIBFTXR_CODEPAGE_ISO_8859_13
#define LIBFTXR_CODEPAGE_ISO_CELTIC			LIBFTXR_CODEPAGE_ISO_8859_14

#define LIBFTXR_CODEPAGE_ISO_LATIN_1			LIBFTXR_CODEPAGE_ISO_8859_1
#define LIBFTXR_CODEPAGE_ISO_LATIN_2			LIBFTXR_CODEPAGE_ISO_8859_2
#define LIBFTXR_CODEPAGE_ISO_LATIN_3			LIBFTXR_CODEPAGE_ISO_8859_3
#define LIBFTXR_CODEPAGE_ISO_LATIN_4			LIBFTXR_CODEPAGE_ISO_8859_4
#define LIBFTXR_CODEPAGE_ISO_LATIN_5			LIBFTXR_CODEPAGE_ISO_8859_9
#define LIBFTXR_CODEPAGE_ISO_LATIN_6			LIBFTXR_CODEPAGE_ISO_8859_10
#define LIBFTXR_CODEPAGE_ISO_LATIN_7			LIBFTXR_CODEPAGE_ISO_8859_13
#define LIBFTXR_CODEPAGE_ISO_LATIN_8			LIBFTXR_CODEPAGE_ISO_8859_14
#define LIBFTXR_CODEPAGE_ISO_LATIN_9			LIBFTXR_CODEPAGE_ISO_8859_15
#define LIBFTXR_CODEPAGE_ISO_LATIN_10			LIBFTXR_CODEPAGE_ISO_8859_16

#define LIBFTXR_CODEPAGE_KOI8_RUSSIAN			LIBFTXR_CODEPAGE_KOI8_R
#define LIBFTXR_CODEPAGE_KOI8_UKRAINIAN			LIBFTXR_CODEPAGE_KOI8_U

#define LIBFTXR_CODEPAGE_WINDOWS_THAI			LIBFTXR_CODEPAGE_WINDOWS_874
#define LIBFTXR_CODEPAGE_WINDOWS_JAPANESE		LIBFTXR_CODEPAGE_WINDOWS_932
#define LIBFTXR_CODEPAGE_WINDOWS_CHINESE		LIBFTXR_CODEPAGE_WINDOWS_936
#define LIBFTXR_CODEPAGE_WINDOWS_KOREAN			LIBFTXR_CODEPAGE_WINDOWS_949
#define LIBFTXR_CODEPAGE_WINDOWS_CHINESE_TRADITIONAL	LIBFTXR_CODEPAGE_WINDOWS_950
#define LIBFTXR_CODEPAGE_WINDOWS_CENTRAL_EUROPEAN	LIBFTXR_CODEPAGE_WINDOWS_1250
#define LIBFTXR_CODEPAGE_WINDOWS_CYRILLIC		LIBFTXR_CODEPAGE_WINDOWS_1251
#define LIBFTXR_CODEPAGE_WINDOWS_WESTERN_EUROPEAN	LIBFTXR_CODEPAGE_WINDOWS_1252
#define LIBFTXR_CODEPAGE_WINDOWS_GREEK			LIBFTXR_CODEPAGE_WINDOWS_1253
#define LIBFTXR_CODEPAGE_WINDOWS_TURKISH		LIBFTXR_CODEPAGE_WINDOWS_1254
#define LIBFTXR_CODEPAGE_WINDOWS_HEBREW			LIBFTXR_CODEPAGE_WINDOWS_1255
#define LIBFTXR_CODEPAGE_WINDOWS_ARABIC			LIBFTXR_CODEPAGE_WINDOWS_1256
#define LIBFTXR_CODEPAGE_WINDOWS_BALTIC			LIBFTXR_CODEPAGE_WINDOWS_1257
#define LIBFTXR_CODEPAGE_WINDOWS_VIETNAMESE		LIBFTXR_CODEPAGE_WINDOWS_1258

#if defined( __cplusplus )
}
#endif

#endif

