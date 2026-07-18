# include <stdio.h>

int main (){
	
	int age;
	float weight;
	
	printf("Please enter your age:");
	scanf("%d",&age);
	
	printf("Please enter your Weight:");
	scanf("%f",&weight);
	
	if(age>=18){
		if (weight>=50){
			printf("You are eligible for BLood Donation.");
		} else {
			printf("You are under weight.");
		}
	} else{
		printf("You are under 18.");
	}
	return 0;
}
