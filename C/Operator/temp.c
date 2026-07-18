#include<stdio.h>

int main(){
	
	float cel,far;
	
	printf("Please enter temperature in celcius:");
	scanf("%f",&cel);
	
    far= (cel*1.8) + 32;
    
   // far>105 ? printf("hot"):printf("not hot");
    
     if(far>105){
    	printf("hot");
	} else {
		printf("not hot");	
	}
	
	return 0 ;
}
