# include <stdio.h>

int main () {
	
	int n,i,arr[50],deleteIndex;
	
	printf("PLease enter size of an array:");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("Please enter elements of an array:");
		scanf("%d",&arr[i]);
	}
	
	printf("Please enter index to remove:");
	scanf("%d",&deleteIndex);
	
	n=n-1;
	
	for (i=deleteIndex;i<n+1;i++){
		arr[i]=arr[i+1];
	}
	
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
}
