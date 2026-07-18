# include <stdio.h>

int main () {
	
	int n,i,arr[50],temp;
	
	printf("PLease enter size of an array:");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("Please enter elements of an array:");
		scanf("%d",&arr[i]);
	}
	
	temp=arr[n-1];
	
	for (i=n-1; i>0; i--) {
		arr[i] = arr[i-1];
	}
	
	arr[0] = temp;
	
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	
	return 0;
}
