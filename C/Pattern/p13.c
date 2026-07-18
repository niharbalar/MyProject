# include <stdio.h>

int main () {
	int i,j,k;
	
	for(i=1; i<=5; i++){
		for (k=1; k<i; k++){
			printf(" ");
		}
		for (j=i; j<=5; j++){
			printf("%d",j);
		}
		printf("\n");
	}   
	
	return 0;
}

//	k=1; k<i; k++
//	12345
//	 2345
//	  345
//	   45
//	    5
//	    
//	j=i; j<=5; j++
//	12345
//	2345
//	345
//	45
//	5
//	i=1; i<=5; i++
    
