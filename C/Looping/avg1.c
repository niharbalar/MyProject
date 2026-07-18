#include<stdio.h>

int main() {
	int i, n, num, sum=0;
	float avg;
	
	printf("How many number's average required?");
	scanf("%d", &n); //n=7
	
	for (i=1; i<=n; i++) {						//1
		printf("Please enter number: ");		//8
		scanf("%d", &num);
		
		
		
		sum = sum + num;						//sum = 0+10 = 10
	}	
	
	printf("Sum is: %d\n", sum);
	
	avg = (float) sum/n;
	
	printf("Average is: %f", avg);
											
												//2
								 				//sum = 10+8 = 18
	
	

	return 0;	
}
