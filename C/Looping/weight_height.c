# include <stdio.h>

int main () {
	
	int std, i, count=0;
	float weight, height;
	
	printf("Please enter number of students:");
	scanf("%d",&std);
	
	for(i=1; i<=std; i++){
		printf("Please enter your weight(in kg) and height(in cm):");
		scanf("%f %f",&weight,&height);
		
		if(weight<50 && height>170){
			count = count + 1;
		}
	}
	
	printf("No. of Qualified Students:%d",count);
	
	
	return 0;
}
