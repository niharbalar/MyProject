# include <iostream>
using namespace std;

int main () {
	int a, b, ans;
	
	try {
		cout << "Enter value of a:";
		cin >> a;
		
		cout << "Enter value of b:";
		cin >> b;
	
		if (b != 0) {
			ans = a/b;	
		} else {
			throw string("Division by zero is not possible");
		}
		
		cout << "Answer is:" << ans;
		
	} catch (string msg) {
		
		cout << msg;
	}
	
	return 0; 
}
