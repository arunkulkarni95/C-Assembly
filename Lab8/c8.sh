#!/bin/bash
#compile and link
echo "Script File c8.sh"
#yasm -g dwarf2 -iformat=yasm -f elf64 -o asmfiles.o asmfiles.asm -l asmfile    s.lst
gcc -c -Wa,-adhln -g -masm=intel lab8.c > lab8.lst
gcc -Xlinker -Map=lab8.map -o lab8 lab8.o
echo "Done"
