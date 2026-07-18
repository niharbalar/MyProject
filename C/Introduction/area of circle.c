#include<stdio.h>

int main() {
	
    float area, r;
    
    printf("Please enter radius of circle:");
    scanf("%f", &r);
	
	area = 3.14*r*r;
	
	printf("Area of Circle = %f",area);
		 
	return 0;
	
}
