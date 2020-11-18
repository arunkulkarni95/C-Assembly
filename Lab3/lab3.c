#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//Arun Kulkarni
//Passing parameters to C program from command line
//along with some simple type checking

int main(int argc, char* argv[]){
	
	float result;

	if(argc != 3){
		printf("Wrong number of parameters.\n");
		return -1;
	}

	if(*argv[1] != 'C' && *argv[1] != 'c' && *argv[1] != 'F' && *argv[1] != 'f'){
		printf("First parameter not C or F.\n");
		return -1;
	}
	
	int len = strlen(argv[2]);

	if(len > 0){
		for(int i = 1; i < len; ++i){
			if(!isdigit(argv[2][i])){
				printf("Second paramater not a number.\n");
				return -1;
			}
		}
	}	
	else{
		printf("Please enter C or F followed by a number.\n");
		return -1;
	}

	if(*argv[1] == 'F' || *argv[1] == 'f'){
		result = (atof(argv[2]) - 32.0) * (5.0/9.0);
		printf("This is equal to %f degrees Celsius.\n",result);
	}
	else if(*argv[1] == 'C' || *argv[1] == 'c'){
		result = (atof(argv[2]) * (9.0/5.0)) + 32.0;
		printf("This is equal to %f degrees Fahrenheit.\n",result);
	}


	
	return 0;
}
