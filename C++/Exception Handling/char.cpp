# include <iostream>
using namespace std;

int main () {
	char in;
	
	cout << "Enter any input:";
	cin >> in;
	
	try {
		if(in >= 'a' && in <= 'a') {
		throw "Alphabet";
	} else if (in >= '0' && in <= '9') {
		throw 0;
	} else {
		throw 1.1;
	}
	} catch (const char *c) {
		cout << c;
	} catch (int x) {
		cout << "Digit";
	} catch (double y) {
		cout << "Special Symbol";
	}
	
	return 0;
}
