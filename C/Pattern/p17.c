# include <stdio.h>

int main () {
	int i,j,k,a,b,c;
	
	for(i=1; i<=5; i++){
		for (k=5; k>i; k--){
			printf(" ");
		}
		for (j=1; j<=i; j++){
			printf("%d",j);
		}
		printf("\n");
	} 
		for(a=2; a<=5; a++){
		for (c=1; c<a; c++){
			printf(" ");
		}
		for (b=a; b<=5; b++){
			printf("%d",b);
		}
		printf("\n");
	}  
	
	 
	   
	return 0;
}
