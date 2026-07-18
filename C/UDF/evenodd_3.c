# include <stdio.h>

int findevenodd(){
	int n;

	printf("Enter any number:");
	scanf("%d",&n);
	
	if(n%2 == 0){
		return 0;
	} else {
		return 1;
	}
}
	
	
int main (){
	
	int ans;
	
	ans = findevenodd ();
	
	if(ans==0){
		printf("even");
	} else {
		printf("odd");
	}
	
	return 0;
}
