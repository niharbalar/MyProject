# include <stdio.h>

int main () {
	
	int n1,n2,n3,n4;
	
	printf("Please enter any 4 numbers:");
	scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
	
	if(n1>n2){
		if(n1>n3){
			if(n1>n4){
				printf("Max is:%d",n1);
			} else {
				printf("Max is:%d",n4);
			}
		} else {
			if(n3>n4){
				printf("Max is:%d",n3);
			} else {
				printf("Max is:%d",n4);
			}
		}
	} else {
		if(n2>n3){
			if(n2>n4){
				printf("Max is:%d",n2);
			} else {
				printf("Max is:%d",n4);
			}
		} else {
			if(n3>n4){
				printf("Max is:%d",n3);
			} else {
				printf("Max is:%d",n4);
			}
		}	
	}
	return 0;	
}
