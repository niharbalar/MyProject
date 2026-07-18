# include <stdio.h>

int main () {
	int i,j,k,l;
	
	for(i=1; i<=5; i++){
		for (j=i; j>=1; j--){
			printf("%d",j);
		}
		
		printf("\n");
	}
	
	for(k=4; k>=1; k--){
		for (l=k; l>=1; l--){
			printf("%d",l);
		}
		printf("\n");
	}     
	
	return 0;
}
