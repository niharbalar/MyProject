# include <stdio.h>

int main () {
	
	char str[500];
	int i,k;
	
	printf("Please enter string:");
	gets(str);
	
	i=0;
	
	while (str[i] != '\0'){
		if(str[i] == ' '){
			for (k=i; str[k] != '\0'; k++){
				str[k] = str[k+1];
			}
		}
		i++;
	}
	
	puts(str);	
	return 0;
}
