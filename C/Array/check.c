# include <stdio.h>

int main (){
	
	int arr[25],n,i,nElem,flag=1;
	
	printf("Please enter size of an Array:");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("Please enter element of Array:");
		scanf("%d",&arr[i]);
	}
	
	printf("Please enter element's value:");
	scanf("%d",&nElem);
	
	for(i=0; i<n; i++){
		if(arr[i]==nElem){
			flag=0;
			break;	
		}
	}
	
	if(flag==0){
		printf("Available");
	} else {
		printf("Not Available");
	}
	
	return 0;
}
