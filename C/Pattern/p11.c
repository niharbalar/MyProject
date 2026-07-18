# include <stdio.h>

int main () {
	int i,j,k;
	
	for(i=1; i<=5; i++){
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

//	k=5; k>i; k--
//	    1
//	   12
//	  123
//	 1234
//	12345
//	
//	j=1; j<=i; j++
//	1
//	12
//	123
//	1234
//	12345
//	i=1; i<=5; i++
