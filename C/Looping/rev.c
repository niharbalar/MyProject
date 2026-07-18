#include<stdio.h>

int main() {
	int num, rev=0, rem, temp;
	
	printf("Please enter number: ");
	scanf("%d", &num);
	
	temp=num;
	
	for (; num!=0; ) {
		rem = num%10;
		rev = rev*10 + rem;
		num = num/10;
	}
	
	printf("Reverse number is: %d\n", rev);
	
	if (rev == temp) {
		printf("Palindrom number");
	} else {
		printf("Not Palindrom number");
	}
	

	return 0;	
}
