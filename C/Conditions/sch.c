#include <stdio.h>

int main () {
	
	int fees, sch=0;
	float cgpa;
	char cast, grade;
	 
	printf("Please enter your Fees:");
	scanf("%d", &fees);
	
	printf("Please enter your cgpa:");
	scanf("%f", &cgpa);
	
	printf("Please enter your cast:");
	scanf(" %c", &cast);
	
	if (cgpa>=9 && cgpa<=10){
		grade = 'A';
	}  else if (cgpa>=8.5 && cgpa<9){
		grade = 'B';
	}  else if (cgpa>=8 && cgpa<8.5){
		grade = 'C';
	}  else if (cgpa>=7.5 && cgpa<8){
		grade = 'D';
	} else {
		grade = 'E';
	}
	
	printf("Your Grade is:%c\n",grade);
	
	switch (grade) {
 		case 'A':
		case 'B':
		switch (cast){
			case 'o':
				sch = 0;
				break;
				
			case 'b':
				sch = fees * 0.25;
				break;
				
			case 'c':
				sch = fees * 0.50;
				break;
				
			case 't':
				sch = fees * 1;
				break;
				
			default:
				printf("You are not eligible for scholarship.\n");
		}
	}
	
	
	printf("Your scholarship is:%d",sch);
	return 0;
}
