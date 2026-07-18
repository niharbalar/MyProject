# include <iostream>
using namespace std;

class Add {
	public:
		int a;
	
	public:
		Add (int a) {
			this->a = a;
		} 
		
		Add operator + (Add a2) {
			return Add(a + a2.a);
		}
		
		void display () {
			cout << a << endl;
		}
};

int main () {
	Add a1(10);
	Add a2 (20);
	Add a3 = a1+a2;
	
	a3.display();
	
	return 0;
}
