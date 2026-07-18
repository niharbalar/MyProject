# include <stdio.h>

int main (){
	
	int arr[25],n ,i;
	
	printf("Please enter size of an array;");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("Please enter element:");
		scanf("%d",&arr[i]);
	}
	
	printf("All Negative Numbers:");
	
	for(i=0; i<n; i++){
		if(arr[i]<0){
			printf("%d ", arr[i]);
		}
	}
	
	return 0;
}
