# include <stdio.h>

int main () {
	
	int n1, n2, n3;
	
	printf("Please enter any 3 numbers:");
	scanf("%d %d %d",&n1,&n2,&n3);
	
	if(n1>n2){
		if (n1>n3){
			printf("Max is:%d",n1);
		} else {
			printf("Max is:%d",n3);
		}
	} else {
		if (n2>n3){
			printf("Max is:%d",n2);
		} else {
			printf("Max is:%d",n3);
		}
	}
	return 0;
}
