# include <stdio.h>

int main () {
	
	int i,j,k;
	
	for (i=5;i>=1;i--){
		for(k=1;k<i;k++){
			printf(" ");
		}
		for(j=i;j<=5;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}

//	k=1;k<i;k++	
//	_ _ _ _ 5		
//	_ _ _ 4 5	
//	_ _ 3 4 5	
//	_ 2 3 4 5
//	1 2 3 4 5	
//	
//i	j=i;j<=5;j++ 
//	
//1	5			
//2	4 5		
//3	3 4 5		
//4	2 3 4 5 	
//5	1 2 3 4 5	
//	i=5;i>=1;i--		
