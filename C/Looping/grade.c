# include <stdio.h>

int main (){
	
	int n,m,roll,i,j,total=0,marks;
	float per;
	
	printf("How many students are there in class?:");
	scanf("%d",&n);
	
	printf("How many subjects do they learn?:");
	scanf("%d",&m);
	
	
	for (i=1; i<=n; i++){
		printf("Please enter students roll number:");
		scanf("%d",&roll);
		total=0;
		for (j=1; j<=m; j++){
			printf("Please enter your marks:");
			scanf("%d",&marks);
			
			total = total+marks;
		}
		
		per = (float)total/m;
		
		printf("Roll No.:%d : Percentage is:%f\n",roll,per);
		
		if(per>=85 && per<=100){
			printf("Grade:A\n");
		} else if (per>=75 && per<85){
			printf("Grade:B\n");
		} else if (per<75) {
			printf("Grade:C\n");
		}
	}
	
	return 0;
}
