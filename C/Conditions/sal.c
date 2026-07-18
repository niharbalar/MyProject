# include <stdio.h>

int main(){
	int salary;
	printf("please enter your salary:");
	scanf("%d",&salary);
	
	if (salary<10000){
		printf("get bonus");
	} else {
		printf("not get bonus");
	}
	
	return 0;
}
