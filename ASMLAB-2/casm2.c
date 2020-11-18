#include <stdio.h> 
#include <stdlib.h> 

//Arun Kulkarni
//C and assembly together; passing longs to assembly function by both value and reference

//assembly call prototypes 

long addByValue(long v1, long v2, long v3, long v4, long v5, long v6); 
long addByReference(long v1, long v2, long v3, long v4, long *v5, long *v6);

int main(int argc, char **argv) 
{
    long val1=0, val2=0, val3=0, val4=0, val5=0, val6=0; 
    long *lptr1, *lptr2;
    long result=0; 
    int i=0; 

    lptr1 = (long*)malloc(8);
    lptr2 = (long*)malloc(8);

    if(!lptr1 || !lptr2){
        printf("malloc fail");
        return -1;
    }

    val1  = 0x0111111111111111; 
    val2  = 0x0111111111111111; 
    val3  = 0x0111111111111111; 
    val4  = 0x0111111111111111; 
    val5  = 0x0111111111111111; 
    val6  = 0x0111111111111111; 

    *lptr1  = 0x0222222222222222;
    *lptr2  = 0x0222222222222222;

    printf("\nThis is adding six 8 byte numbers by value:\n"); 
    result = addByValue(val1, val2, val3, val4, val5, val6); 
    printf("Result after addition by value: %lx\n", result); 

    printf("\nThis is adding six 8 byte numbers - 4 by value, and 2 by reference:\n");
    result = addByReference(val1, val2, val3, val4, lptr1, lptr2);
    printf("Result after addition by value and reference: %lx\n\n",result);

    return 0; 
}
