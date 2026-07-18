# include <stdio.h>

int main () {
	
	char str[500];
	int i,n;
	
	printf("Please enter string:");
	gets(str);
	
	i=0;
	
	n = strlen(str);
	
	while (str[i] != '\0'){
		if(i<n-1){
			printf("%c-",str[i]);
		} else {
			printf("%c",str[i]);
		}
		i++;
	}	
	return 0;
}
