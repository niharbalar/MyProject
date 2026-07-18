#include <stdio.h>

int main () {
	
	int n,i,num;
	
	printf("How many number are required?:");
	scanf("%d",&n);
	
//	for(i=1; i<=n; i++){
//		printf("Please enter any number:");
//		scanf("%d",&num);
		
//		if(num%7 == 0 || num%3 == 0){
//			printf("Number is divisible by 3 or 7\n");
//		} else {
//			printf("Number is not divisible by 3 or 7\n");
//		}
//	}

	i=1;
	
	while(i<=n) {
		printf("Please enter any number:");
		scanf("%d",&num);
		
		if(num%7 == 0 || num%3 == 0){
			printf("Number is divisible by 3 or 7\n");
		} else {
			printf("Number is not divisible by 3 or 7\n");
		}
		
		i++;
		
	}
	
	
	
	
	return 0;
}


