# include <stdio.h>

int main (){
	
	char a;
	int b;
	float c;
	
	a='Y';
	b=4;
	c=20.08;
	
	printf("%c is stored at address %u\n",a,&a);
	printf("%d is stored at address %u\n",b,&b);
	printf("%f is stored at address %u",c,&c);
	
	return 0;
}
