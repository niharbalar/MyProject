# include <stdio.h>

int findFactorial(int n){
	
	if(n>1){
		return n*findFactorial(n-1);
	} else {
		return 1;
	}
}

int main() {
	
	int n,ans;
	
	printf("Enter any number:");
	scanf("%d",&n);
	
	ans=findFactorial(n);				//findfactorial(4)
										//4*findfactorial(3)
										//4*3*findfactorial(2)
										//4*3*2*findfactorial(1)
										//4*3*2*1
	
	printf("Factorial is:%d",ans);
	
	return 0;
}
