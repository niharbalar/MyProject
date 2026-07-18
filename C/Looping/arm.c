# include <stdio.h>

int main () {
	
	int i,rem=0,sum=0,temp;
	
	i=1;
	
	while(i<=1000){
		temp = i;
		sum = 0;
		
		while(temp>0){
			rem = temp%10;
			sum = sum+(rem*rem*rem);
			temp = temp/10;
		}
		
		if (sum == i){
			printf("%d\n",sum);
		}
		
		i++;
	}
	
	return 0;
}


