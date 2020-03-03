#include <stdlib.h>
#include <stdio.h>
#include "meterConverter.h"

int main(void){
	//Sample main to test meterConverter.c
	double input=0;
	int forLoopInput=0;

	printf("Enter the input number: \n");
	scanf("%lf", &input);
	printf("Enter the amount of places to move: \n");
	scanf("%d", &forLoopInput);
	
	meterConvert(forLoopInput, &input);
	printf("Here is the return val: %lf\n", input);

	return 0;
}
