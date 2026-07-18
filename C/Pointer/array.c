# include <stdio.h>

int main(){
	int arr[50],i,n,*p;
	
	p = arr;
	
	printf("Enter size of an array:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("Enter value of array:");
		scanf("%d",(p+i));
	}
	
	for(i=0;i<n;i++){
		printf("%d",&p+i);
	}
	
	return 0;
}

