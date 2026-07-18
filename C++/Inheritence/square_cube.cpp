# include <iostream>
using namespace std;

class Number {
	protected:
		int n;
			
	public:
		void getNumber () {
			cout << "Enter any number:";
			cin >> n;
		}
};

class Square : public Number {
	public:
		void setSquare () {
			cout << "Square:" << n*n << endl;
		}
};

class Cube : public Number {
	public:
		void setCube () {
			cout << "Cube:" << n*n*n << endl;
		}
};

int main () {
	Square s;
	Cube c;
	
	s.getNumber();
	s.setSquare();
	
	c.getNumber();
	c.setCube();
	
	return 0;
}
