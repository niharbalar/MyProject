#include<stdio.h>

int main() {
	int num, count=0;
	
	printf("Please enter number: ");
	scanf("%d", &num);
	
	for (; num!=0; ) {
		num = num/10;
		count++;
	}
	
	printf("No of digit is: %d", count);
	
	return 0;
}
