#include<stdio.h>

int main() {
	int i, n, fact=1;
	
	printf("Please enter number: ");
	scanf("%d", &n);
	
	for (i=n; i>=1; i--) {
		fact = fact * i;
	}
	
	printf("Factorial is: %d", fact);
	

	return 0;	
}
