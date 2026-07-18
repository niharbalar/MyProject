#include<stdio.h>

int main(){
	
	int a;
	
	printf("Please enter value of a:");
	scanf("%d",&a);
	 
	// a>0 ? printf("positive"):printf("negative");
	
	 if(a>0){
    	printf("positive");
	} else {
		printf("negative");	
	}
	return 0;
}
