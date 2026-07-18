# include <stdio.h>

int main () {
	
	int n,i,month;
	float elc,sal,mark,total=0,net_total=0;
	
	printf("How many total months expense is required? :");
	scanf("%d",&n);
	
	i=1;
	
	while (i<=n) {
		total=0;
		
		printf("Please enter month no.:");
		scanf("%d",&month);
		
		printf("Please enter electricity,salary and marketing expense:");
		scanf("%f %f %f",&elc,&sal,&mark);
		
		total = elc+sal+mark;
		net_total = net_total + total;
	
		printf("Month no.:%d\n", month);
		printf("Total expense:%f\n",total);
		
		i++;
		
	}
	
	printf("Net total expense is:%f",net_total);
	
	return 0;
}
