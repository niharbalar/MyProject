# include <stdio.h>

int main (){
	
	int arr[25],n,i,k,rElem;
	
	printf("Please enter size of an Array:");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("Please enter element of Array:");
		scanf("%d",&arr[i]);
	}
	
	printf("Please enter element's value to be removed:");
	scanf("%d",&rElem);
	
	for(i=0; i<n; i++){
		if(arr[i]==rElem){
			for(k=i; k<n; k++){
				arr[k]=arr[k+1];
			}
			n--;
		}
	}
	
	for(i=0; i<n; i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
}
