# include <stdio.h>

int main () {
	
	char str[500];
	int i,n;
	
	printf("Please enter string:");
	gets(str);
	
	n=strlen(str);
	
	for (i=0; i<n; i++){
		if(str[i]>='a' && str[i]<='z'){
			str[i]=str[i]-32;
		} else if (str[i]>='A' && str[i]<='Z'){
			str[i]=str[i]+32;	
		}	
	}
	
	puts(str);
	
	return 0;
}
