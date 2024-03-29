#!/bin/bash
#
# Script to generate syscall table
#
# NOTE: Run this script to generate the syscall table.
#
# azuepke, 2013-05-07: initial

if [ ! -f "$1" ]; then
	echo "usage: $0 <file_with_list_of_syscalls>"
	echo "  creates system call table syscall_table.S"
	exit
fi

set -u -e

FILE=syscall_table.S

cat <<- EOF > $FILE
	/* $FILE -- syscall table */
	/* GENERATED BY scripts/generate_syscall_table.sh -- DO NOT EDIT */

EOF

ID=0
while read FUNC NAME ARGS32 ARGS64 ALIASES; do
	if [ ! -z "$FUNC" -a "$FUNC" != "#" ]; then
		cat <<- EOF >> $FILE
			__SYSCALL($FUNC)	/* $ID: $NAME */
		EOF
		ID=$(($ID + 1))
	fi
done < $1

cat <<- EOF >> $FILE
	__SYSCALL(sys_ni_syscall)	/* END */
EOF
