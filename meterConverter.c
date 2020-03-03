#include<stdlib.h>
#include<stdio.h>
#include"meterConverter.h"

void meterConvert(int n, double *val);

/*This function takes an integer n which represents the amount of places
in the orders of magnitude that you want to move. It also takes a double
pointer val which represents the value in meters(of any magnitude that you 
want). It then checks to see if n is larger than 0 or less than 0. 
If n is equal to 0 val is left unchanged. If n is greater than 0 it goes 
through a for loop(n times) and sets the value of val equal to 
(val divided by the global increment value of 10). If n is less 
than 0, the absolute value of n is taken and set to m. It then goes 
through the foor loop(n times) and sets the value of val equal to 
(val times the global increment value of 10). 

Input:
	int n
	double *val
Output:
	none*/
void meterConvert(int n, double *val){
	double incrementVal=10.0;
	if(n>0){
		for(int i=0; i<n; i++){
			*val=(*val/incrementVal);
		}
	}
	else if(n<0){
		int m=n*(-1);
		for(int i=0; i<m; i++){
			*val=((*val)*incrementVal);
		}
	}
}
