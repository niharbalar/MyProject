#include<stdio.h>

int main(){
	
	int phy,chem, maths;
	float per;
	
	printf("Please enter marks of phyics, chemistry, maths:");
	scanf("%d %d %d",&phy, &chem, &maths);
	
	per = (float)(phy + chem + maths)/3;
	
	printf("Percentage = %f",per);
	return 0 ;
}
