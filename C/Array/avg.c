# include <stdio.h>

int main () {
	
	int n,i,arr[50],sum=0,avg;
	
	printf("PLease enter size of an array:");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("Please enter elements of an array:");
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i<n; i++){
		sum = sum + arr[i];	
	}
	
	avg = sum/n;
	
	printf("Average of all element is:%d",avg);
	
	return 0;
}
