# include <stdio.h>

int main (){
	
	int a,*p,n;
	
	a=401;
	p=&a;
	n=*p;
	
	printf("%d is stored at address %u\n",a,&a);
	printf("%d is stored at address %u\n",p,&p);
	printf("%d is stored at address %u",n,&n);
	
	return 0;
}
