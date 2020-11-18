#!/bin/bash
#compile and link
echo "Script File c3.sh"
#yasm -g dwarf2 -iformat=yasm -f elf64 -o asmfiles.o asmfiles.asm -l asmfiles.lst
gcc -c -Wa,-adhln -g -masm=intel lab3.c > lab3.lst
gcc -Xlinker -Map=lab3.map -o lab3 lab3.o
echo "Done"
