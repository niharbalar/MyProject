# include <stdio.h>

int main () {
	
	int n,a,b,c,i;
	
	printf("How many numbers are required for fibonacci series? :");
	scanf("%d",&n);
	
	a=0;
	b=1;
	
	printf("%d %d ",a ,b);
	
	for (i=3; i<=n; i++){
		c=a+b;
		printf("%d ", c);
		
		a=b;
		b=c;
	}
	
	return 0;
}
