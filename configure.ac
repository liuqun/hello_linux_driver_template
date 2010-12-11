dnl File: autoconf.ac
dnl -----------------

AC_PREREQ(2.57)
AC_INIT

AC_PROG_CC
AC_PROG_MAKE_SET

AC_ARG_VAR([kdir], ["Specify which directory contains the linux kernel source"])
if test -z "$kdir" ; then
	AC_MSG_ERROR(["Please set your kernel source directory (e.g. ./configure kdir=/path/to/linux-2.6.xx)"])
elif test ! -f $kdir/Kbuild ; then
	AC_MSG_ERROR(["Cannot find Kbuild under kernel source directory $kdir, please check your kernel source."])
fi
AC_CONFIG_FILES([Makefile])
AC_OUTPUT

