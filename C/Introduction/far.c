#include<stdio.h>

int main(){
	
	float cel,far;
	
	printf("Please enter temperature in celcius:");
	scanf("%f",&cel);
	
    far= (cel*1.8) + 32;
	
	printf("Farhenite = %f",far);
	return 0 ;
}
