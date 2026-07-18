# include <iostream>
using namespace std;

int main () {
	
	char in;
	
	cout << "Enter your input:";
	cin >> in;
	
	if(in >='0' && in <='9'){
		cout << "Numeric";
	} else {
		cout << "Not Numeric";
	}
	return 0;
}
