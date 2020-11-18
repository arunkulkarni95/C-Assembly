#!/bin/bash
#compile and link
echo "Script File c2.sh"
#yasm -g dwarf2 -iformat=yasm -f elf64 -o asmfiles.o asmfiles.asm -l asmfiles.lst
gcc -c -Wa,-adhln -g -masm=intel lab2.c > lab2.lst
gcc -Xlinker -Map=lab2.map -o lab2 lab2.o
echo "Done"
