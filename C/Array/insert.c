# include <stdio.h>

int main () {
	
	int n,i,arr[50],insertIndex,newElem;
	
	printf("PLease enter size of an array:");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("Please enter elements of an array:");
		scanf("%d",&arr[i]);
	}
	
	printf("Please enter index and value of new element:");
	scanf("%d %d",&insertIndex,&newElem);
	
	n=n+1;
	
	for (i=n-1;i>insertIndex;i--){
		arr[i]=arr[i-1];
	}
	
	arr[insertIndex]=newElem;
	
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
