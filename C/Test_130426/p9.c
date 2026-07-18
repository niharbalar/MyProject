# include <stdio.h>

int main () {
	
	char i,j;
	
	for(i='A';i<='E';i++){
		
		for(j='A';j<=i;j++){
			
			printf("%c%c ",j,j+1);
		}
		
		printf("\n");
	}
	return 0;
}
