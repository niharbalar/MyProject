#include<stdio.h>

int main(){
	
    int x,y;
    
    printf("Please enter value of x and y:");
    scanf("%d %d",&x,&y);
    
   // (x>100)||(x!=y)||(y<50) ? printf("correct"):printf("incorrect");
   // !(x==y && y<10) ? printf("correct"):printf("incorrect");
   
   if(!(x==y && y<10)){
    	printf("correct");
	} else {
		printf("incorrect");	
	}
	return 0;
}
