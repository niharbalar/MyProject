#include<stdio.h>

int main() {
	int i, a, b, c, d, ratio;
	
	for (i=1; i<=3; i++) {
		printf("Please enter any four number:");
		scanf("%d %d %d %d", &a, &b, &c, &d);
		
		if (c != d) {
			ratio = (a-b)/(c-d);
			
			printf("Ratio is: %d\n", ratio);
		}
	}
	
	return 0;
}
