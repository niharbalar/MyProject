# include <stdio.h>

int main (){
	
	int arr[25],n ,i, max=0;
	
	printf("Please enter size of an array:");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("Please enter element:");
		scanf("%d",&arr[i]);
	}
	
	printf("Maximum number is:");
	
	for(i=0; i<n; i++){
		if(arr[i]>max){
			max=arr[i];
		}
			
	}
	
	printf("%d",max);
	
	return 0;
}

