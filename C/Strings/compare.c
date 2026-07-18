# include <stdio.h>

int main () {
	
	char str1[500],str2[500];
	 
	printf("Please enter string:");
	gets(str1);
	
	printf("Please enter string:");
	gets(str2);
	
	if(strcmp(str1,str2)==0){
		printf("Both the strings are equal");
	} else {
		printf("Both the strings are not equal");	
	}

	return 0;
}
