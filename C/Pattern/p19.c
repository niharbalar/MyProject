# include <stdio.h>

int main () {
	int i,j,k,a,b,c;
	
	for(i=5; i>=1; i--){
		
		for (j=1; j<=i; j++){
			printf("%d",j);
		}
		
		for (k=5; k>i; k--){
			printf("  ");
		}
		
		for (j=i; j>=1; j--){
			printf("%d",j);
		}
		printf("\n");
	}
	
		for(a=2                                                                                                                 ; a<=5; a++){
		
		for (b=1; b<=a; b++){
			printf("%d",b);
		}
		
		for (c=5; c>a; c--){
			printf("  ");
		}
		
		for (b=a; b>=1; b--){
			printf("%d",b);
		}
		
		printf("\n");
	}     
	   
	return 0;
}
