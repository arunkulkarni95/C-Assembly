#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Arun Kulkarni
//generate 100 pseudorandom integers and write to a file for sorting

int main(int argc, char* argv[]){

    FILE *fr;
    int i;

    fr = fopen("datain.txt","w");
    srand(time(0));
    for(i = 0; i < 100; i++){
        fprintf(fr,"%d ",rand() % 1000);
    }
    fclose(fr);
}
