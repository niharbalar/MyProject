# include <stdio.h>

int main () {
	
	char str1[500],str2[500];
	 
	printf("Please enter string:");
	gets(str1);
	
	strcpy(str2,str1);
	
	printf("%s",str2);
	
	
	return 0;
}
