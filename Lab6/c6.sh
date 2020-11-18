#!/bin/bash
#compile and link
echo "Script File c6.sh"
#yasm -g dwarf2 -iformat=yasm -f elf64 -o asmfiles.o asmfiles.asm -l asmfiles.lst
gcc -c -Wa,-adhln -g -masm=intel lab6.c > lab6.lst
gcc -Xlinker -Map=lab6.map -o lab6 lab6.o
echo "Done"
