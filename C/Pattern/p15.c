# include <stdio.h>

int main () {
	int i,j,k;
	
	for(i=1; i<=5; i++){
		for (k=5; k>i; k--){
			printf(" ");
		}
		for (j=i; j>=1; j--){
			printf("%d",j);
		}
		printf("\n");
	}   
	
	return 0;
}

//	k=5; k>i; k--
//	    1
//	   21
//	  321
//	 4321
//	54321
//
//	j=i; j>=1; j--	
//	1
//	21
//	321
//	4321
//	54321
//	i=1; i<=5; i++

