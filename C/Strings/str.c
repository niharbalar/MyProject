# include <stdio.h>

int main () {
	
	char str[500];

	 
	printf("Please enter string:");
	gets(str);
	
	strrev(str);
	puts(str);
	
	strlwr(str);
	puts(str);
	
	strupr(str);
	puts(str);
	
	
	return 0;
}
