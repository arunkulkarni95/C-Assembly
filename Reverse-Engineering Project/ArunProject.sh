#!/bin/bash
#compile and link
echo "Script File ArunProject.sh"
gcc -c -Wa,-adhln -g -masm=intel ArunProject.c > ArunProject.lst
gcc -Xlinker -Map=ArunProject.map -o ArunProject ArunProject.o
echo "Done"
