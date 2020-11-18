#!/bin/bash
#compile and link
echo "Script File c9.sh"
#yasm -g dwarf2 -iformat=yasm -f elf64 -o asmfiles.o asmfiles.asm -l asmfile    s.lst
gcc -c -Wa,-adhln -g -masm=intel wclist.c > wclist.lst
gcc -Xlinker -Map=wclist.map -o wclist wclist.o
echo "Done"
