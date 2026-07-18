# include <stdio.h>

void swap(int *p1, int*p2){
	int temp;
	
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main (){
	int x,y;
	
	printf("Enter values of x and y:");
	scanf("%d %d",&x,&y);
	
	swap(&x,&y);
	
	printf("x=%d  y=%d",x,y);
	
	return 0;
}
