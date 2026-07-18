# include <iostream>
using namespace std;

int main () {
	char in;
	
	cout << "Enter any input:";
	cin >> in;
	
	try {
		if(in == 'a') {
		throw "1";
	} else if (in == 'b') {
		throw "2";
	}else if (in == 'c') {
		throw "3";
	} else {
		throw 1.1;
	}
	} catch (const char *a) {
		cout << a;
	} catch (const char *b ){
		cout << b;
	} catch (const char *c ){
		cout << c;
	} catch (...) {
		cout << "4";
	}
	
	return 0;
}
