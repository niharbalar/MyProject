#include<stdio.h>

int main(){
	
	float area, length, height;
	
	printf("Please enter height of rectangle:");
    scanf("%f", &height);
    
    printf("Please enter length of rectangle:");
    scanf("%f", &length);
	
	area = length*height;
	
	printf("Area of Rectangle = %f", area);
	
	return 0;
}
