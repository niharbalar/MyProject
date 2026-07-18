#include<stdio.h>

int main(){
	
   float height;
    
    printf("Please enter your Height(in feet):");
    scanf("%f",&height);
    
    // height>6 ? printf("Taller than 6 Feet"):printf("Shorter than 6 Feet");
    
    if(height>6){
    	printf("Taller than 6 Feet");
	} else {
		printf("Shorter than 6 Feet");	
	}
	return 0;
}
