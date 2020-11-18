#include <stdio.h> 
#include <stdlib.h> 

//Arun Kulkarni
//C and assembly together; simple functiond in assembly to 
//add and subtract two longs passed by value

//assembly call prototypes 

long addnumbers(long v1, long v2); 
long subtractnumbers(long v1, long v2);

int main(int argc, char **argv) 
{
    long val1=0, val2=0; 
    long result=0; 
    int i=0; 

    val1  = 0x0111111111111111; 
    val2  = 0x0111111111111111; 

    printf ("\nThis is adding two 8 byte numbers:\n"); 

    result = addnumbers(val1, val2); 
    printf("Result after addition: %lx\n", result); 


    printf ("\nThis is subtracting two 8 byte numbers:\n"); 

    result = subtractnumbers(val1, val2); 
    printf("Result after subtraction: %lx\n\n", result); 

    return 0; 
}
