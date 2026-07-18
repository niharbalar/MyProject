#include<stdio.h>

int main(){
	
	float si, p, r, n;
	
	printf("Please enter value of Principal Amount, Rate, No of Years: ");
	scanf("%f %f %f",&p,&r,&n);
	
	si = (p*r*n)/100;
	
	printf("Simple Intrest is: %f",si);
	return 0 ;
}
