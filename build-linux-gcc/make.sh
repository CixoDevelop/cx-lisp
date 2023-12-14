#!/bin/bash

SOURCE_DIR=../source
SOURCES="list.c object.c eval.c"

BUILD_DIR=../build-linux-gcc
SHELL="cx-lisp.c"

CC=gcc
C_FLAGS="-O2 -Wall -Wextra"

for file in $SOURCES; do
    source_base=$(basename $file .c)
    $CC $C_FLAGS $SOURCE_DIR/$file -c -o $BUILD_DIR/$source_base.o
done

shell_basename=$(basename $SHELL .c)

$CC $C_FLAGS $SOURCE_DIR/$SHELL $BUILD_DIR/*.o -o $BUILD_DIR/$shell_basename.run
