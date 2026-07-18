# include <stdio.h>

int main () {
	
	int n,i,j,temp,arr[50];
	
	printf("PLease enter size of an array:");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("Please enter elements of an array:");
		scanf("%d", &arr[i]);
	}
	
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if (arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	for(i=0; i<n; i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
}
