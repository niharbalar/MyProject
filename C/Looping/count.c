# include <stdio.h>

int main () {
	
	int n,count;
	
	printf("Please enter any number:");
	scanf("%d",&n);
	
	for (;n>0;){
		count++; 
		n=n/10;                                                                                                                                                                                                                                               
	}	
	
	printf("No. of digits of the number are:%d", count);
	
	return 0;
}
