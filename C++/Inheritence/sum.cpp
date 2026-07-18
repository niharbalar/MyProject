# include <iostream>
using namespace std;

class A {
	protected:
		int a;
	
	public:
		A (int x){
			a=x;
		}			
};

class B{
	protected:
		int b;
	
	public:
		B (int y) {
			b=y;
		}			
};

class C : public B, public A{
	protected:
		int c;
	
	public:
		C (int x, int y, int z) : B(y), A(x) {
			c=z;
		}			
};

class D : public C {
	protected:
		int d;
	
	public:
		D (int x, int y, int z, int w) : C(z, x, y) {
			d=w;
		}
		
		void displaySum () {
			cout << "Sum of all the numbers is:" << a+b+c+d << endl;
		}			
};

int main () {
	D d(10,20,30,40);
	d.displaySum();
}
