# include <stdio.h>

int main () {
	
	char str[500];
	int i,n,count=0;
	
	printf("Please enter string:");
	gets(str);
	
	for(i=0; str[i]!='\0'; i++){
		count++;
	}
	
	printf("Lenght:%d",count);
	
	return 0;
}
