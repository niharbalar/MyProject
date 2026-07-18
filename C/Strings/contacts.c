# include <stdio.h>

int main () {
	
	char str1[500],str2[500];
	 
	printf("Please enter string:");
	gets(str1);
	
	printf("Please enter string:");
	gets(str2);
	
	strcat(str1,str2);
	
	puts(str1);
	
	
	return 0;
}
