#include<stdio.h>

int main(){
	
   int salary;
    
    printf("Please enter your salary:");
    scanf("%d",&salary);
    
    // salary<10000 ? printf("Bonus Granted"):printf("Bonus Not Granted");
    
    if(salary<10000){
    	printf("Bonus Granted");
	} else {
		printf("Bonus Not Granted");	
	}
	return 0;
}
