#!/bin/bash
#compile and link
echo "Script File asm2.sh"
yasm -g dwarf2 -iformat=yasm -f elf64 -o asm2.o asm2.asm -l asm2.lst
gcc -c -Wa,-adhln -g -masm=intel casm2.c > casm2.lst
gcc -Xlinker -Map=casm2.map -o casm2 casm2.o asm2.o
echo "Done"
