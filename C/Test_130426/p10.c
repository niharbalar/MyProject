# include <stdio.h>

int main () {
	int i,j,k;
	
	for(i=5; i>=1; i--){
		
		for (j=i; j<=5; j++){
			printf("%d",j);
		}
		
		for (k=1; k<i; k++){
			printf("5");
		}
		
		printf("\n");
		
	}   
	   
	return 0;
	           
}


