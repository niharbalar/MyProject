#include<stdio.h>

int main(){
	
	int num;
	
	printf("Please enter number:");
	scanf("%d",&num);
	 
	// num>=100 ? printf("Number is Greater or Equal to 100"):printf("Number is Less than 100");
	
	if(num>=100){
    	printf("Number is Greater or Equal to 100");
	} else {
		printf("Number is Less than 100");	
	}
	return 0;
}
