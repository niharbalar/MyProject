# include <iostream>
using namespace std;

class Vehicle {
	public:
		virtual void start () = 0;
};

class Car : public Vehicle {
	public:
		void start () override {
			cout << "Car start by switch" << endl;
		}
};

class Bike : public Vehicle {
	public:
		void start () override {
			cout << "Bike start by key" << endl;
		}
};

int main () {
	Car c;
	Bike b;
	
	c.start();
	b.start();
		
	return 0;
}
