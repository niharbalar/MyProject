# include <stdio.h>

int main () {
	
	char str1[500],str2[500];
	 
	printf("Please enter string:");
	gets(str1);
	
	strcpy(str2,str1);
	
	strrev(str1);
	
	if(strcmp(str1,str2)==0){
		printf("Palindrome Stirng");
	} else {
		printf("Not Palindrome Stirng");	
	}
	
	return 0;
}
