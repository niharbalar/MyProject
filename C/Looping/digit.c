# include <stdio.h>

int main () {
	int num,sum=0,rem=0,temp;
	
	printf("Please enter a number:");
	scanf("%d",&num);
	
	temp = num;
	
	while(num>0) {
        rem = num % 10;
        sum = sum + rem;
        num = num/10;
        

	}
      printf("sum is:%d\n",sum);  
	
	
		
	
	return 0;
}
