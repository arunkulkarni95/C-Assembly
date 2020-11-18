#include <stdio.h>
#include <stdlib.h>

//Arun Kulkarni
//Simple passing commands to a C program from the command line

int main(int argc, char* argv[]){
	int count;
	printf("Program Name: %s", argv[0]);
	if(argc == 1){
		printf("\nNo parameters passed other than program name.\n");
	}
	if(argc >= 2){
		printf("\nNumber of arguments passed: %d\n",argc);
		printf("\nCommand line arguments passed (other than program name):\n");
		
		printf("\nAs integers:\n");
		for(count = 1; count < argc; count++){
			printf("\nargv[%d]: %d\n",count,atoi(argv[count]));
		}
		
		printf("\nAs strings:\n");
		for(count = 1; count < argc; count++){
			printf("\nargv[%d]: %s\n",count,argv[count]);
		}
		
	}
	return 0;
}
