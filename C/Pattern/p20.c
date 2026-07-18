# include <stdio.h>

int main () {
	
	int i,j,k;
	
	for(i=1; i<5; i++){
		
		for (k=5; k>i+1; k--){
			printf(" ");
		}
		
		for (j=1; j<=i; j++){
			if(j ==1){
				printf("* ");
			} else {
				printf(" ");
			}
		}
			
		for (j=i-1; j>=1; j--){
			if(j == 1){
				printf("* ");
			} else {
				printf(" ");
			}
		}
	
		printf("\n");
	}   
	   
	return 0;
}


//
//				*
//			*		*
//		*				*
//	*						*
