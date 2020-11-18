#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
#include "wclist.h" 

//Arun Kulkarni
//Structures, pointers, and dynamic memory allocation

void initList(struct CListRecord *ptr, char *dp1); 
void printList(struct CListRecord *ptr); 

int main (int argc, char **argv) 
{
    struct CListRecord *ptr;
    ptr = (struct CListRecord*) malloc(MAX_RECORDS * sizeof(struct CListRecord));
    char *datap = (char*) malloc(MAX_DSIZE);
    char data[10] = "RANDOMCHAR";
    datap = data;    

    initList(ptr, datap);
    printList(ptr);

    printf ("\nDone!\n"); 
    return 0; 
}
void initList(struct CListRecord *base, char *datap) 
{
    for (int i = 0; i < MAX_RECORDS; ++i){
        base = base + i;
        base->valid=3, base->taskid=5, base->state=8, base->dptr=datap, base->token='p';
        base->dummy='D',base->recordid=i + 1;
        base = base - i;
    }
    return; 
}
void printList(struct CListRecord *base)
{
    for (int i = 0; i < MAX_RECORDS; ++i){

        base = base + i;
        char *dnump = base->dptr;
        char dnum = *dnump + i;
        printf("Record: %d\n",dnum);
        printf("valid: %d\ntaskid: %d\nstate: %d\ndptr: %p\n",base->valid,base->taskid,base->state,base->dptr + i);
        printf("token: %c\ndummy: %c\nrecordid: %hd\n\n",base->token,base->dummy,base->recordid);
        base = base - i;
    }
    return;
}
