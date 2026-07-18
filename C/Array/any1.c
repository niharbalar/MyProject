#include <stdio.h>

int main() {
	
    char str[100];
    char reversed[100];
    int i,j,length = 0;

    printf("Enter a string to reverse: ");
    gets(str);

    while (str[length] != '\0') {
        length++;
    }

	for (i = 0; i < length; i++) {
    	reversed[i] = str[length - 1 - i];
	}
	
	reversed[length] = '\0';

    printf("Original: %s\n", str);
    printf("Reversed: %s\n", reversed);

    return 0;
} 

