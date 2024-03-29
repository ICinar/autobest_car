#!/bin/bash
#
# Script to generate syscall stubs
#
# NOTE: Run this script in the directory where you want to generate system call
# NOTE: stubs. It will create a file for each system call.
#
# azuepke, 2013-05-07: initial

usage()
{
	echo "usage: $0 <file_with_list_of_syscalls> <32|64>"
	echo "  32 enables 32-bit mode"
	echo "  64 enables 64-bit mode"
	exit
}

if [ -z "$2" -o  ! -f "$1" ]; then
	usage
fi

if [ "$2" != "32" -a "$2" != "64" ]; then
	usage
fi

set -u -e

while read FUNC NAME TYPE COMMENT; do
	if [ ! -z "$FUNC" -a "$FUNC" != "#" ]; then
		FILE=$FUNC.S
		cat <<- EOF > $FILE
			/* $FILE -- system call stub for $FUNC() */
			/* GENERATED BY scripts/generate_syscall_stubs.sh -- DO NOT EDIT */

			#include <syscalls.h>
			#include <syscall.h>

			_SYSCALL_PROLOG($FUNC)
			_SYSCALL_$TYPE($NAME)
			_SYSCALL_EPILOG($FUNC)
		EOF
	fi
done < $1
