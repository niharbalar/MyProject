#include<stdio.h>

int main() {
	int num, i, flag=1;
	
	printf("Please enter number: ");
	scanf("%d", &num);
	
	for (i=2; i<num; i++) {
		if (num%i == 0) {
			flag=0;
			break;
		}
	}
	
	if (flag==1) {
		printf("Prime number");	
	} else {
		printf("Not Prime number");	
	}
	
	return 0;
}
