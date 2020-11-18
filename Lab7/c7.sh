#!/bin/bash
#compile and link
echo "Script File c7.sh"
#yasm -g dwarf2 -iformat=yasm -f elf64 -o asmfiles.o asmfiles.asm -l asmfile    s.lst
gcc -c -Wa,-adhln -g -masm=intel lab7.c > lab7.lst
gcc -Xlinker -Map=lab7.map -o lab7 lab7.o
echo "Done"
