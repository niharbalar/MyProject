#include<stdio.h>

int main(){
	
	int A,B;
	
	printf("Please enter two number A and B:");
	scanf("%d %d",&A, &B);
	
	if(A>B){
		printf("Number A is greater than Number B");
	} else if (A<B){
		printf("Number A is smaller than Number B");
	} else {
		printf("Both Numbers are Equal");
	}
	
	return 0;
}

