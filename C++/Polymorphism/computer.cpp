# include <iostream>
using namespace std;

class Computer {
	public:
		virtual void info () {
			cout << "Computer Information" << endl;
		}
};

class PC : public Computer {
	public:
		void info () override {
			cout << "PC Information" << endl;
		}
};

class Laptop : public Computer {
	public:
		void info () override {
			cout << "Laptop Information" << endl;
		}
};

int main () {
	Computer* c;
	
	PC p;
	c=&p;
	c->info();
	
	Laptop l;
	c=&l;
	c->info();
	
	return 0;
}
