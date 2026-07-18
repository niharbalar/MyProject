#include<stdio.h>

int main(){
	
	float area, base, height;
	
	printf("Please enter base of triangle:");
    scanf("%f", &base);
    
    printf("Please enter height of triangle:");
    scanf("%f", &height);
	
	 area = 0.5*base*height;
	 
	 printf("Area of Triangle = %f",area);
	 
	return 0;
}
