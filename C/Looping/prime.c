# include <stdio.h>

int main (){
	
	int n,i,flag = 1;
	
	printf("Please enter any number:");
	scanf("%d",&n);
	
//	for(i=2; i<n; i++){
//		if(n%i == 0){
//			flag = 0;
//			break;
//		}
//	}	
	
	i=2;
	
	while (i<n) {
		if(n%i == 0){
			flag = 0;
			break;
		}
		i++;
		
	}
	
	if(flag == 1){
		printf("Prime Number");
	} else {
		printf("Not Prime Number");
	}
	return 0;
}
