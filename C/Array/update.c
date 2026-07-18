# include <stdio.h>

int main (){
	
	int arr[25],n,i,ui,ne;
	
	printf("Please enter size of an array:");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("Please enter element:");
		scanf("%d",&arr[i]);
	}
	
	printf("Please enter element's index and value:");
	scanf("%d %d",&ui,&ne);
	
	arr[ui]=ne;
	
	for(i=0; i<n; i++){
		printf("%d\n",arr[i]);
	}
	
	return 0;
}
	
