#!/bin/bash
#compile and link
echo "Script File asm1.sh"
yasm -g dwarf2 -iformat=yasm -f elf64 -o asm1.o asm1.asm -l asm1.lst
gcc -c -Wa,-adhln -g -masm=intel casm1.c > casm1.lst
gcc -Xlinker -Map=casm1.map -o casm1 casm1.o asm1.o
echo "Done"
