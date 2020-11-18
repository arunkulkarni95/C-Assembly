#include <stdio.h>
#include <stdlib.h>
#define SIZE 0x7B

//Arun Kulkarni
//Pointers/dynamic memory allocation to populate and print ASCII characters

int main(int argc, char* argv[]) {

    char *cptr; 
    int i;

    //allocate 123 bytes for char pointers
    cptr = (char*) malloc(SIZE);
    if (!cptr){
        printf("malloc fail");
        return -1;
    }

    //populate cptr
    for (i = 0x00; i < SIZE; i++) {
         *(cptr + i) = i;
    }

    //print all chars from 0x30 to 0x7A
    for (i = 0x30; i < SIZE; i++) {
         printf("%c",*(cptr + i));
    }
    
    //print all decimal digits 0 -9 
    printf("\n");
    for (i = 0x30; i < 0x3A; i++) {
         printf("%c",*(cptr + i));
    }

    //print all capital alphabet 
    printf("\n");
    for (i = 0x41; i < 0x5B; i++) {
        printf("%c",*(cptr + i));
    }

    //print all small alphabet 
    printf("\n");
    for (i = 0x61; i < 0x7B; i++) {
        printf("%c",*(cptr + i));
    }

    //free memory
    printf("\n");
    free(cptr);
    
    return 0;
}
