#!/bin/bash
#compile and link
echo "Script File c4.sh"
#yasm -g dwarf2 -iformat=yasm -f elf64 -o asmfiles.o asmfiles.asm -l asmfiles.lst
gcc -c -Wa,-adhln -g -masm=intel lab4.c > lab4.lst
gcc -Xlinker -Map=lab4.map -o lab4 lab4.o
echo "Done"
