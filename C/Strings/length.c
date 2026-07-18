# include <stdio.h>

int main () {
	
	char str[500];
	int n;
	 
	printf("Please enter string:");
	gets(str);
	
	n = strlen(str);
	
	printf("Lenght of the string is:%d",n);
	
	
	return 0;
}
