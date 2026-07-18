# include <stdio.h>

float add(float x, float y){
	return x+y;
}

float sub(float x, float y){
	return x-y;
}

float mul(float x, float y){
	return x*y;
}

float div(float x, float y){
	return x/y;
}

int main (){
	
	int a,b,ans;
	char op;
	
	printf("Enter any two number:");
	scanf("%d %d",&a, &b);
	
	printf("Which operation is needed?");
	scanf(" %c",&op);
	
	switch (op) {
		case'+':
			ans = add(a, b);
			break;
			
		case'-':
			ans = sub(a, b);
			break;
			
		case'*':
			ans = mul(a, b);
			break;
			
		case'/':
			ans = div(a, b);
			break;
			
		default:
			ans=0;
	}
	
	printf("%d",ans);
	
	return 0;
}
