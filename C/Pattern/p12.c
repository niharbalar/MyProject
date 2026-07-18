# include <stdio.h>

int main () {
	int i,j,k;
	
	for(i=5; i>=1; i--){
		for (k=5; k>i; k--){
			printf(" ");
		}
		
		for (j=1; j<=i; j++){
			printf("%d",j);
		}
		printf("\n");
	}   
	   
	return 0;
}


//	k>i; k=5;k--
//	12345
//	 1234
//	  123
//	   12
//	    1
//	 
//	j=1; j<=i; j++    
//	1 2 3 4 5
//	1 2 3 4
//	1 2 3
//	1 2
//	1
//	i=5; i>=1; i--
