#include<stdio.h>

int main(){
	
	int a, b;
	
	printf("Please enter value of a:");
    scanf("%d", &a);
    
    printf("Please enter value of b:");
    scanf("%d", &b);

	
	int add,sub,mul,div;
	
	add = a+b;
	sub = a-b;
	mul = a*b;
	div = a/b;
	
	printf("Addition is : %d\n",add);
	printf("Subtraction is : %d\n",sub);
    printf("Multilpication is : %d\n",mul);
	printf("Division is : %d",div);
	
	return 0;
}
