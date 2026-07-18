# include <iostream>
using namespace std;

class B;
class A{
	private:
		int num1;
		
	public:
		void getData (){
		
			cout << "Enter Number 1:";
			cin >> num1;
		}
		
		friend void displayData(A x, B y);
};

class B{
	private:
		int num2;
		
	public:
		void getData (){
		
			cout << "Enter Number 2:";
			cin >> num2;
		}
		
		friend void displayData(A x, B y);
};

void displayData (A x, B y){
	if (x.num1 > y.num2){
		cout << "Max is:" << x.num1;
	} else {
		cout << "Max is:" << y.num2;
	}
}

int main () {
	A a;
	B b;
	
	a.getData();
	b.getData();
	
	displayData(a, b);
	
	return 0;
}
