# include <stdio.h>

void sumarray(int arr[], int n){
	
	int sum=0,i;
	
	for(i=0; i<n; i++){
		sum = sum + arr[i];
	}
	
	printf("Sum:%d",sum);
}

int main () {
	
	int n,i,arr[50];
	
	printf("PLease enter size of an array:");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("Please enter elements of an array:");
		scanf("%d",&arr[i]);
	}
	
	sumarray(arr,n);
	
	return 0;
}
