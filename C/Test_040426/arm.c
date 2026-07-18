# include <stdio.h>

int main () {
	
	int n,rem=0,sum=0,temp;
	
	for (n=1;n<=1000;n++) {
		temp = n;
		sum = 0;
		
        rem = temp % 10;                
        sum = sum+(rem*rem*rem); 
        temp = temp/10;
		
		if (n == sum) {
			printf("%d\n", n);
		}	           
    }
	
	return 0;
}        

//43
