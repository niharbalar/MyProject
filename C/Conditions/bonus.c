# include <stdio.h>

int main () {
	
	char g;
	int salary,bonus;
	
	printf("Please enter your Gender (M/f):");
	scanf("%c",&g);
	
	printf("Please enter your salary:");00
	scanf("%d",&salary);
	
	if(g=='M' && salary<10000){
		bonus=salary*0.02;
	} else if (g=='F' && salary<10000){
		bonus=salary*0.03;
	}	
	
	printf("Your Bonus is:%d",bonus);
	return 0;
}
