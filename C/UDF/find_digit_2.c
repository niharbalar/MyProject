#include<stdio.h>

void findDigit(int n){
	int i,count=0,elem,rem,flag=1;
	
	printf("Enter number to check:");
	scanf("%d",&elem);
	
	while(n!=0){
		rem=n%10;
			if(rem==elem){
			flag=0;
		}
		n=n/10;
		count++;
	}

	printf("Number of digit is:%d\n",count);
	
	if(flag==1){
		printf("Not Available");
	} else {
		printf("Available");
	}
}

int main () {
	
	int n;
	
	printf("Enter any number:");
	scanf("%d",&n);
	
	findDigit(n);
	
	return 0;
}
