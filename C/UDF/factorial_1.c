# include <stdio.h>

void factorial(){
	int n,i,fact=1;
	
	printf("Please enter any number:");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
		fact = fact*i;
	}
	
	printf("Factorial is: %d",fact);
}

int main () {
	
	factorial(); 
	return 0;
}

