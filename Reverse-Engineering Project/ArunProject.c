#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char* argv[]){

    //declare vars
    FILE *pFile, *output;
    long lSize;
    unsigned char *buffer;
    size_t result;

    //open read file diff.exe
    pFile = fopen("diff.exe","r");
    if (pFile == NULL){
        fputs("Could not open diff.exe\n",stderr);
        exit(1);
    }

    //open write file, syscalls.txt
    output = fopen("syscalls.txt","w");
    
    //obtain file size
    fseek(pFile, 0, SEEK_END); //seek to end of file
    lSize = ftell(pFile); //get file pointer
    rewind(pFile); //rewind to beginning of file

    //allocate memory for entire file
    //add one byte for NULL character to terminate
    //memory string
    buffer = (unsigned char *)malloc(sizeof(unsigned char)*lSize + 1);
    if (buffer == NULL) {
        fputs("Memory error", stderr);
        exit(2);
    }

    //set memory to zero before copying in
    memset(buffer, 0, sizeof(unsigned char)*lSize + 1);

    //copy file into buffer
    result = fread(buffer, sizeof(unsigned char), lSize, pFile);
    if (result != lSize){
        fputs("Reading error", stderr);
        exit(3);
    }

    //whole file now loaded into memory buffer
    //crawl through file looking for FF 25 opcodes
    //print calls and addresses to syscalls.txt
    printf("Parsing diff.exe for FF 25 System calls...\n");
    printf("Calls and location addresses in syscalls.txt\n");
    fprintf(output,"FF 25 System Call:\t\tLocation Address:\n\n");
    for (int i = 0; i < lSize; i += 8){
        if (buffer[i] == 0xFF){
            if (buffer[i + 1] == 0x25 || buffer[i + 1] == 0x15){
                fprintf(output,"%02x %02x %02x %02x %02x %02x",buffer[i],buffer[i+1],buffer[i+2],buffer[i+3],buffer[i+4],buffer[i+5]);
                fprintf(output,"\t\t0x%02x%02x%02x\n",buffer[i+4],buffer[i+3],buffer[i+2]);
            }
        }
    }

    //terminate
    fclose(pFile);
    fclose(output);
    free(buffer);
    return 0;
}
