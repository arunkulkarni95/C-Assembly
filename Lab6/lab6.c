#include <stdio.h>
#include <stdlib.h>

//Arun Kulkarni
//Dynamic memory allocation, printing pointers, and working with long values

int main (int argc, char* argv[]){

    int *iptr;
    long *lptr;
    int i;
    long sum = 0;
    long num;
    double avg;

    printf("Allocating 4 bytes for iptr...\n");
    printf("Allocating 32 bytes for lptr...\n");
    iptr = (int*) malloc(4);
    lptr = (long*) malloc(32);
    if(!iptr || !lptr){
        printf("malloc fail");
        return -1;
    }

    //print address space for iptr
    printf("\nAddress of iptr:\n");
    printf("%p\n",(void*)&iptr);
    
    //print address space for lptr
    printf("\nAddress of lptr:\n");
    printf("%p\n",(void*)&lptr);
    
    printf("\nEnter 4 integers one at a time, followed by the Enter key:\n");

    for (i = 0; i < 4; i++){		
	    int s = scanf("%ld",&num);
	    if ( s != 1){
            printf("Incorrect value entered. Try again.\n ");
            return -1;
	    }
			
		sum += num;
	}

    avg = sum / 4.0;
    printf("\nAverage of the 4 longs: %.2lf\n",avg);

    return 0;

}
