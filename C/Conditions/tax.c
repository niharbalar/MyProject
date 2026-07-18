# include <stdio.h>

int main () {
	
	int salary;
	float tax, aftertax;
	
	printf("Please enter your salary:");
	scanf("%d",&salary);
	
	if(salary<=2000){
		printf("No Tax Deduction");
	} else if (salary<=4000 && salary>2000 ){
		tax = salary*0.03;
	} else if (salary<=5000 && salary>4000){
		tax = salary*0.05;
	} else if (salary>5000){
		tax = salary*0.08;
	}
	
	aftertax = salary-tax;
	
	printf("Your Tax deduction is:%f\n",tax);
	printf("Your Salary after tax deduction is:%f",aftertax);
	
	return 0;
}
