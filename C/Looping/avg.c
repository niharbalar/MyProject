# include <stdio.h>

int main () {
	
	int n,i,num,sum=0;
	float avg;
	
	printf("How many number are required? :");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
		printf("Please enter any number:");
		scanf("%d",&num);
		
		sum = sum + num;
	}
	
	avg = (float)sum/n;
	printf("Avg is:%f", avg);
	return 0;
}
