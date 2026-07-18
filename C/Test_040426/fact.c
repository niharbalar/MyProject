# include <stdio.h>

int main () {
	
	int n, i, fact;
	
	printf("Please enter any number:");
	scanf("%d",&n);
	
	for(i=n; i>=1; i--){
		fact = fact*i;
	}

	printf("factorial is: %d",fact);
	return 0;
}

