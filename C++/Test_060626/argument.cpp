# include <iostream>
using namespace std;

class Demo {
	public:
		void show () {
			cout << "Functin with 0 argument" << endl;
		}
		
		void show (int a) {
			cout << "Functin with 1 argument:" << a << endl;
		}
		
		void show (int a, int b) {
			cout << "Functin with 2 argument:" << a << b << endl;
		}
		
		void show (int a, int b, int c) {
			cout << "Functin with 3 argument:" << a << b << c << endl;
		}
};

int main () {
	Demo d;
	
	d.show();
	d.show(10);
	d.show(10,20);
	d.show(10,20,30);
	
	return 0;
}
