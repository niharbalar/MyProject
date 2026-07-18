#include<stdio.h>

int main() {
	int i, num, rem, ans=0;
	
	i=1;
	
	while(i<=1000) {
		num=i;
		ans=0;
		
		while (num!=0) {
			rem = num%10;
			ans = ans + (rem*rem*rem);
			num = num/10;
		}
		
		if (ans == i) {
			printf("%d\n", i);
		}
		
		i++;
	}

	return 0;	
}
