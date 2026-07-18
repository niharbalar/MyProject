# include <stdio.h>

int main () {
	
	char str1[500], str2[500], str3[500];
	int i,n,m;
	
	printf("Please enter string:");
	gets(str1);
	
	printf("Please enter string:");
	gets(str2);
	
	n=strlen(str1);
	m=strlen(str2);
	
	for(i=0; i<n+m; i++){
		if(i<n){
			str3[i]=str1[i];
		} else {
			str3[i]=str2[i-n];	
		}
	}
	
	puts(str3);
	
	return 0;
}
