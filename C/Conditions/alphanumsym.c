#include<stdio.h>

int main(){
	
	char ch;
	
	printf("Please enter any input:");
	scanf("%c",&ch);
	
	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
		printf("alphabet");
	} else if (ch>='0' && ch<='9'){
		printf("number");
	} else {
		printf("special symbol");
	}
	
	return 0;
}

