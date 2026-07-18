# include <stdio.h>

int main () {
	
	int income;
	float tax, net;
	
	printf("Please enter your income:");
	scanf("%d",&income);
	
	if(income<10000){
		printf("No need to pay any tax\n");
	} else if (income<15000){
		tax=income*0.10;
	} else if (income>15000){
		tax=income*0.18;
	} 
	
	net=income-tax;
	
	printf("Your amount of tax to pay is:%f\n",tax);
	printf("Your net income is:%f",net);
	
	return 0;
}
