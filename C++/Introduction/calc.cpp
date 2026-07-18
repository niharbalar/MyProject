# include <iostream>
using namespace std;

float add (float x, float y){
	return x+y;
}

float sub (float x, float y){
	return x-y;
}

float mul (float x, float y){
	return x*y;
}

float div (float x, float y){
	return x/y;
}

int main () {
	
	int a,b,ans;
	char op;
	
	cout << "Enter values of a:";
	cin >> a;
 
 	cout << "Enter values of b:";
	cin >> b;
	
	cout << "Which operation is needed:";
	cin >> op;
	
	switch(op){
		
		case '+':
			ans = add(a,b);
			break;
			
		case '-':
			ans = sub(a,b);
			break;
			
		case '*':
			ans = mul(a,b);
			break;
			
		case '/':
			ans = div(a,b);
			break;
			
		default:
			cout << "Invalid Input";	
	}
	
	cout << ans;
	return 0;
}
