/*
 * The internal libftxr header
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

#if !defined( _FTXR_TEST_LIBFTXR_H )
#define _FTXR_TEST_LIBFTXR_H

#include <common.h>

/* If Cygwin libtool DLL support is enabled and do not want to create static
 * executables set LIBFTXR_DLL_IMPORT before including libftxr.h
 */
#if defined( _WIN32 ) && defined( DLL_EXPORT ) && !defined( HAVE_STATIC_EXECUTABLES )
#define LIBFTXR_DLL_IMPORT
#endif

#include <libftxr.h>

#endif /* !defined( _FTXR_TEST_LIBFTXR_H ) */
