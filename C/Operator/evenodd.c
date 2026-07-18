#include<stdio.h>

int main(){
	
	int num;
	
	printf("Please enter number:");
	scanf("%d",&num);
	 
	num%2 == 0 ? printf("Number is Even"):printf("Number is Odd");
	
//	if(num%2 == 0){
   // 	printf("Number is Even");
//	} else {
//		printf("Number is Odd");	
//	}
	return 0;
}
