# include <stdio.h>

int main () {
	
	int arr1[50],arr2[50],arr3[50],n,m,i;
	
	printf("Please enter size of an Array 1:");
	scanf("%d",&n);
	
	printf("Please enter size of an Array 2:");
	scanf("%d",&m);
	
	for(i=0; i<n; i++){
		printf("Please enter element of Array 1:");
		scanf("%d",&arr1[i]);
	}
	
	for(i=0; i<m; i++){
		printf("Please enter element of Array 2:");
		scanf("%d",&arr2[i]);
	}
	
	for(i=0; i<n; i++){
		arr3[i]=arr1[i];
	}
	
	for(i=0; i<m; i++){
		arr3[n+i]=arr2[i];
	}
	
	for(i=0; i<n+m; i++){
		printf("%d ",arr3[i]);
	}
	
	return 0;
}
