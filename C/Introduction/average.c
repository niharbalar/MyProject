#include<stdio.h>

int main(){
	
	float a, b, c, average;
	
	printf("Please enter value of a:");
	scanf("%f",&a);
	
	printf("Please enter value of b:");
	scanf("%f",&b);
	
	printf("Please enter value of c:");
	scanf("%f",&c);
	
	average = (a+b+c)/3;
	
	printf("Average is:%f",average);
	
	return 0;
}
