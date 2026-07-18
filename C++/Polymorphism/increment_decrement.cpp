# include <iostream>
using namespace std;

class Number {
	public:
		int num;
		
	public:
		Number (int num) {
			this->num = num;
		}
		
	void operator ++ (int) {
		num = num + 50;
	}
	
	void operator --(int) {
		num = num - 30;
	}
	
	void display () {
		cout << "Number value is:" << num << endl;
	}
};

int main () {
	Number n(10);
	
//	++n;			// pre increment
//	--n;			// pre decrement
	
	n++;			// post increment
	n--; 			// post decrement
	
	n.display();
	
	return 0;
}
