#include<stdio.h>

int main(){
	
   float per;
    
    printf("Please enter your Percentage:");
    scanf("%f",&per);
    
    // per>34 ? printf("Passed"):printf("Failed");
    
    if(per>34){
    	printf("Passed");
	} else {
		printf("Failed");	
	}
	return 0;
}
