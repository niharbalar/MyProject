#include<stdio.h>

int main() {
	int n, m, i, j, marks, sum=0, rollNo;
	float per;
	
	printf("How many students in the class?");
	scanf("%d", &n);	//n=4
	
	printf("How many subject they study?");
	scanf("%d", &m);	//n=3
	
	
	
	for (i=1; i<=n; i++) {
		sum=0;
		
		printf("Please enter your roll no: ");
		scanf("%d", &rollNo);
			
		for (j=1; j<=m; j++) {
			
			
			printf("Pleas enter marks: ");
			scanf("%d", &marks);
			
			sum = sum + marks;
		}
		
		printf("Roll No: %d\n", rollNo);
		printf("Total marks: %d\n", sum);
		
		per = (float) sum/m;
		
		printf("Percentage is: %f\n", per);
		
		if (per>=85 && per<=100) {
			printf("Grade: A\n");
		} else if (per>=75 && per<85) {
			printf("Grade: B\n");
		} else if (per>=0 && per<75) {
			printf("Grade: C\n");
		}
	}
	
	

	return 0;	
}
