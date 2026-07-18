# include <stdio.h>

int findarmstrong(int n){
	
	int rem,sum=0,temp;
	
		temp=n;
		
		while(n!=0){
			rem = n%10;
			sum = sum+(rem*rem*rem);
			n = n/10;
		}
		
		if (temp == sum){
			return 1;
		} else {
			return 0;
		}
}
	
int main () {
	
	int ans,num;
	
	printf("Enter any number:");
	scanf("%d",&num);
	
	ans = findarmstrong(num);
	
	if(ans==1){
		printf("armstrong number");
	} else {
		printf("not an armstrong number");
	}
	
	return 0;
}
