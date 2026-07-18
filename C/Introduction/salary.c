#include<stdio.h>

int main(){
	
	int base_salary;
	float hra, da, ta, gross_salary;
	
	printf("Please enter your base_salary:");
	scanf("%d",&base_salary);
	
	hra = base_salary*0.10;
	da = base_salary*0.08;
	ta = base_salary*0.05;
	
	gross_salary = base_salary + hra + da + ta;
	
	printf("Gross_salary is:%f", gross_salary);
	
	return 0;
}
