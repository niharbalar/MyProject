# include <iostream>
using namespace std;

int main () {
	int age;
	
	try {
		cout << "Enter your age:";
		cin >> age;

		if (age < 0) {
			throw string("Invalid Input");	
		} else if (age < 17) {
			throw string("Not Eligible for voting");
		} else {
			cout << "Eligible for voting";
		}
			
	} catch (string msg1) {	
		cout << msg1;
	} catch (string msg2) {
		cout << msg2;
	}
	
	return 0; 
}
