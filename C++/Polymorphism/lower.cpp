# include <iostream>
using namespace std;

class Number {
	private:
		int value;
		
	public:
		Number (int v) {
			value = v;
		}
		
	Number operator > (Number obj) {
		if (value > obj.value) {
			return 1;
		} else {
			return 0;
		}
	}
	
	void display () {
		cout << value;
	}
};

int main () {
	int a,b;
	
	cout << "Enter two numbers:";
	cin >> a >> b;
	
	Number n1(a), n2(b);
	
	if (a > b) {
		cout << "Higher value is:";
		n2.display();
	} else {
		cout << "Higher value is:";
		n1.display();
	}
	
	return 0;
}
