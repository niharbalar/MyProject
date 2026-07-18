#include<stdio.h>

int main(){
	
	int x, y, temp;
	
	printf("Please enter value of x and y:");
	scanf("%d %d",&x,&y);
	
	temp=x;
	x=y;
	y=temp;
	
	printf("x = %d\n",x);
	printf("y = %d",y);
	return 0 ;
}
