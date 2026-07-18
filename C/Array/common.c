# include <stdio.h>

int main (){
	
	int arr1[25],arr2[25],n,i,j,m;
	
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
		for (j=0; j<m; j++){
			if (arr1[i]==arr2[j]){
				printf("%d ", arr1[i]);
				break;
			}
		}
	}
	
	return 0;
}
