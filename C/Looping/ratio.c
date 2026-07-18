# include <stdio.h>

int main () {
	
	int n1,n2,n3,n4,i;
	float ratio;
	
	for(i=1; i<=3; i++){
	printf("Please enter any 4 numbers:");
	scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
	
	if(n3 != n4){
		ratio = (n1-n2)/(n3-n4);
		printf("Ratio is:%f\n",ratio);
	}
		
	
	}

	
	return 0;
}
