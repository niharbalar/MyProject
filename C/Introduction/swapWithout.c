#include<stdio.h>

int main(){
	
	int a,b;
	
	printf("Please enter value of a and b:");
	scanf("%d %d",&a,&b);
	
    a=a+b;
	b=a-b;
	a=a-b;
	
	printf("value of a = %d\n",a);
	printf("value of b = %d",b);
	return 0 ;
}
