// Entry point of the Python C API.
// C extensions should only #include <Python.h>, and not include directly
// the other Python header files included by <Python.h>.

#ifndef Py_PYTHON_H
#define Py_PYTHON_H

// Since this is a "meta-include" file, "#ifdef __cplusplus / extern "C" {"
// is not needed.

// Include standard header files
#include <assert.h>		// assert()
#include <inttypes.h> // uintptr_t
#include <limits.h>		// INT_MAX
#include <math.h>			// HUGE_VAL
#include <stdarg.h>		// va_list
#include <wchar.h>		// wchar_t
#ifdef HAVE_SYS_TYPES_H
#include <sys/types.h> // ssize_t
#endif

// <errno.h>, <stdio.h>, <stdlib.h> and <string.h> headers are no longer used
// by Python, but kept for the backward compatibility of existing third party C
// extensions. They are not included by limited C API version 3.11 and newer.
//
// The <ctype.h> and <unistd.h> headers are not included by limited C API
// version 3.13 and newer.
#if !defined(Py_LIMITED_API) || Py_LIMITED_API + 0 < 0x030b0000
#include <errno.h>	// errno
#include <stdio.h>	// FILE*
#include <stdlib.h> // getenv()
#include <string.h> // memcpy()
#endif
#if !defined(Py_LIMITED_API) || Py_LIMITED_API + 0 < 0x030d0000
#include <ctype.h> // tolower()
#ifndef MS_WINDOWS
#include <unistd.h> // close()
#endif
#endif

#endif /* !Py_PYTHON_H */
