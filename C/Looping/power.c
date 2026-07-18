# include <stdio.h>

int main () {
	
	int x,y,i,ans=1;
	
	printf("Please enter value of x & y:");
	scanf("%d %d",&x,&y);
	
	i=1;
	
	while(i<=y){
		ans = ans*x;
		i++;
	}
	
	printf("Answer:%d",ans);
	return 0;
}
