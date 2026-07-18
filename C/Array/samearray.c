# include <stdio.h>

int main (){
	
	int arr1[25],arr2[25],n,i,m,flag=1;
	
	printf("Please enter size of an Array 1:");
	scanf("%d",&n);
	
	printf("Please enter size of an Array 2:");
	scanf("%d",&m);
	
	if(n==m){
		for(i=0; i<n; i++){
			printf("Please enter element of Array 1:");
			scanf("%d",&arr1[i]);
		}
	
		for(i=0; i<m; i++){
			printf("Please enter element of Array 2:");
			scanf("%d",&arr2[i]);
		}
		
		for (i=0; i<n; i++){
			if(arr1[i] != arr2[i]){
				flag=0;
				break;
			}	
		}
	
		if(flag==1){
			printf("Same");
		} else if(flag==0){
			printf("Not Same");
		}
	
	} else {
		printf("Size of both the Array is different");
	}
	
	return 0;
}

