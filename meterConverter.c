#include<stdlib.h>
#include<stdio.h>

double meterConvert(int n, double val);

/*This function takes an integer n which represents the amount of places
in the orders of magnitude that you want to move. It also takes a double
val which represents the value in meters(of any magnitude that you want). 
It then checks to see if n is larger than 0 or less than 0. If n is equal
to 0 it returns val which has not changed. If n is greater than 0 it goes
through a for loop(n times) and sets val equal to (val divided by the global
increment value of 10). After the for loop has ended returnVal is set to
val. It returns returnVal. If n is less than 0, the absolute value of n
is taken and set to m. It then goes through the foor loop(n times) and
set val equal to (val times the global increment value of 10). After the
for loop has ended returnVal is set to val and returnVal is returned. 

Input:
	int n
	double val
Output:
	val*/
double meterConvert(int n, double val){
	double returnVal=0;
	double incrementVal=10;
	if(n>0){
		for(int i=0; i<n; i++){
			val=(val/incrementVal);
		}
		returnVal=val;
		return returnVal;
	}
	else if(n<0){
		int m=n*(-1);
		for(int i=0; i<m; i++){
			val=(val*incrementVal);
		}
		returnVal=val;
		return returnVal;
	}
	return val;
}

int main(void){
	//Sample main to test.
	double input=0;
	double returnVal=0;
	int forLoopInput=0;	

	printf("Enter the input number: \n");
	scanf("%lf", &input);
	printf("Enter the amount of places to move: \n");
	scanf("%d", &forLoopInput);

	returnVal=meterConvert(forLoopInput, input);
	printf("Here is the return val: %lf\n", returnVal);
}
