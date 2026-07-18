#include<stdio.h>

int main() {
	int x, y, i, ans=1;
	
	printf("Please enter value of x and y: ");
	scanf("%d %d", &x, &y);		//x=5	y=3
	
	i=1;
	
	while (i<=y) {
		ans = ans * x;				//ans = 1*5 = 5
									//ans = 5*5 = 25
		i++;						//ans = 25*5 = 125
	}
	
	printf("Ans is: %d", ans);

	return 0;	
}
