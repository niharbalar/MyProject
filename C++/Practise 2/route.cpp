# include <iostream>
using namespace std;

class Transport {
	public: 
		virtual void showRoute () {
			cout << "Route Information." << endl;
		}
};

class Car : public Transport {
	public: 
	 void showRoute () {
			cout << "Car Route : Use Highway" << endl;
		}
};

class Bicycle : public Transport {
	public: 
	 void showRoute () {
			cout << "Bicycle Route : Use Cycle Track" << endl;
		}
};

int main () {
	Transport *t;
	
	Car c;
	Bicycle b;
	
	t=&c;
	t->showRoute();
	
	t=&b;
	t->showRoute();
	
	return 0;
}
