#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.58])
AC_INIT([ScanAndSolve], [1.0], [freytag@intact-solutions.com])
AC_CONFIG_SRCDIR([.])
AC_CONFIG_HEADERS([config.h])
AM_INIT_AUTOMAKE([1.10 subdir-objects foreign -Wall no-define ])
AC_ARG_ENABLE([static],
[  --enable-static    Turn on static compilation],
[case "${enableval}" in
  yes) static=true ;;
  no)  static=false ;;
  *) AC_MSG_ERROR([bad value ${enableval} for --enable-static]) ;;
esac],[static=false])
AM_CONDITIONAL([STATIC], [test x$static = xtrue])

# Checks for programs.
AC_PROG_CXX
AC_PROG_CC
AC_PROG_LIBTOOL
LT_INIT

# Checks for libraries.

# Checks for header files.
AC_CHECK_HEADERS([fcntl.h limits.h malloc.h memory.h stddef.h stdlib.h string.h unistd.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_HEADER_STDBOOL
AC_C_INLINE
AC_TYPE_SIZE_T

# Checks for library functions.
AC_FUNC_ERROR_AT_LINE
AC_FUNC_MALLOC
AC_FUNC_REALLOC
AC_FUNC_STRTOD
AC_CHECK_FUNCS([floor memset pow select sqrt strchr strdup strrchr strtoul])

AC_OUTPUT(Makefile)
