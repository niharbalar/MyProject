# include <stdio.h>

int main () {
	
	char str[500];
	int i,n;
	
	printf("Please enter string:");
	gets(str);
	
	n=strlen(str);
	
	for (i=0;i<n;i++){
		if(str[i]=='A'){
			str[i]='Z';
		} else if (str[i]=='a') {
			str[i]='z';
		}
	}
	
	puts(str);
	
	return 0;
}
