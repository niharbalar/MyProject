# include <stdio.h>

int main () {
	
	char g;
	int salary,bonus;
	
	printf("Please enter your Gender (M/F):");
	scanf("%c",&g);
	
	printf("Please enter your salary:");
	scanf("%d",&salary);
	
	switch (g){
		case 'M':
			if (salary<=10000){
				bonus=salary*0.02;
			} else {
				printf("Salary is more than 10000.\n");
			}
			break;
			
		case 'F':
			if (salary<=10000){
				bonus=salary*0.03;
			} else {
				printf("Salary is more than 10000.\n");
			}
			break;
			
		default:
			printf("Invalid Input");
	}
	
	printf("Your bonus is:%d",bonus);
	return 0;
}
