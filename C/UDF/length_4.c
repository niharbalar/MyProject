# include <stdio.h>

int stringlength(char str[]){
	int i,count=0;
	
	for(i=0; str[i]!='\0'; i++){
		count++;
	}
	
	return count;
}

int main() {
	char str[100];
	int length;
	
	printf("Enter the string:");
	gets(str);
	
	length = stringlength(str);
	
	printf("Length is:%d",length);
	
	return 0;
}
