#include <stdio.h>

int main() {
    int n, rev = 0, rem=0, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    
    temp = n;

    
    for (;n>0;) {
        rem = n % 10;                
        rev= rev * 10 + rem; 
        n = n/10;
        
		printf("Number is:%d\n",n);
   	 	printf("Reversed number: %d\n",rev);
   	}
	
	if (temp == rev) {
        printf("Number is a palindrome.\n");
    } else {
        printf("Number is not a palindrome.\n");
    }
    
	return 0;
}
