# include <stdio.h>

int main () {
	
	int n,i,arr[50],flag=1;
	
	printf("PLease enter size of an array:");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("Please enter elements of an array:");
		scanf("%d", &arr[i]);
	}
	
	for(i=0; i<n-1; i++){
		if (arr[i]>arr[i+1]){
			flag=0;
			break;
		}
	}
	
	if(flag==1){
		printf("Ascending");
	} else if(flag==0){
		printf("Not Ascending");
	}
	
	return 0;
}
