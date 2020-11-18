#!/bin/bash
#compile and link
echo "Script File c5.sh"
#yasm -g dwarf2 -iformat=yasm -f elf64 -o asmfiles.o asmfiles.asm -l asmfiles.lst
gcc -c -Wa,-adhln -g -masm=intel lab5.c > lab5.lst
gcc -Xlinker -Map=lab5.map -o lab5 lab5.o
echo "Done"
