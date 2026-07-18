#include<stdio.h>

int main(){
	
	float weight, height, height_m, bmi;
	
	printf("Please enter your Weight(kg) and Height(cm):");
	scanf("%f %f",&weight, &height);
	
	height_m = height/100;
	
	bmi = weight/(height_m*height_m);
	
	
	printf("BMI = %f",bmi);
	return 0 ;
}
