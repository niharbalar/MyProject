# include <stdio.h>

int main (){
	
	int arr[25],n,i,temp=0,x,y;
	
	printf("Please enter size of an Array:");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("Please enter element of Array:");
		scanf("%d",&arr[i]);
	}
	
	x=arr[0];
	y=arr[n-1];
	
	temp=arr[0];
	arr[0]=arr[n-1];
	arr[n-1]=temp;
	
	for(i=0; i<n; i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
}
