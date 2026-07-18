# include <iostream>
using namespace std;

class A {
	
};

class B : public A {
	public:
		void Calculate (float a, float b){
			cout << "Division is:" << a/b << endl;
		}
		
		void Calculate (float a, float b, float c){
			cout << "Subtraction is:" << a-b-c << endl;
		}
		
		void Calculate (float a, float b, float c, float d){
			cout << "Multiplication is:" << a*b*c*d << endl;
		}
		
		void Calculate (float a, float b, float c, float d, float e){
			cout << "Addition is:" << a+b+c+d+e << endl;
		}
};

int main () {
	B b;
	
	b.Calculate(20,10);
	b.Calculate(30,20,10);
	b.Calculate(40,30,20,10);
	b.Calculate(50,40,30,20,10);
	
	return 0;
}
