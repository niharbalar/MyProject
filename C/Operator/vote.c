#include<stdio.h>

int main(){
	
    int age;
    
    printf("Please enter your age:");
    scanf("%d",&age);
    
   // age>=18 ? printf("Eligible for voting"):printf("Not Eligible for voting");
    
    if(age>=18){
    	printf("Eligible for voting");
	} else {
		printf("Not Eligible for voting");	
	}
	return 0;
}
