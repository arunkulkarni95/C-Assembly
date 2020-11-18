#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//Arun Kulkarni
//Basic keyboard I/O in C

int main(int argc, char* argv[]){
	
	int num;
	int sum = 0;
	float avg = 0.0;
	int i,s;

	printf("This program will compute the average of 10 integers.\n");
	printf("Enter 10 integers one at a time, followed by the  Enter key:\n");

	for (i = 0; i < 10; i++){		
		s = scanf("%d",&num);
		if ( s != 1){
			printf("Incorrect value entered. Try again.\n ");
            return -1;
		}
			
		sum += num;

	}
	avg = sum / 10.0;
	printf("The average of the 10 integers is: %f\n",avg);
    return 0;
}
