// PrintingParamInLoop.c
// Suppose I am running some code for a range of parameter values. Now suppose I want to print to screen which parameter value calculations are going on at the moment. But I want all of it to be printed in the same line iteratively, not one after the other.
// This is the code snippet for that!
//------------------------------------------------------------
#include <stdio.h>
#include <unistd.h> //has sleep() function.
//------------------------------------------------------------
int main(int argc, char *argv[]){
	int N_a = 11;
	int N_b = 11;
	
	for (int a=0; a<N_a; a++){
		for (int b=0; b<N_b; b++){
			printf("a=%d, b=%d    \r", a, b);
			fflush(stdout);
			sleep(1);
		}
	}
	printf("\n");
	return 0;
}