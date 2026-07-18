# include <stdio.h>

int main () {
	
	int n,i,arr[50],sum=0;
	
	printf("PLease enter size of an array:");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("Please enter elements of an array:");
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i<n; i++){
		if(arr[i]%2 == 0){
			sum = sum + arr[i];
		}
	}
	
	printf("Sum of all even element is:%d",sum);
	
	return 0;
}
