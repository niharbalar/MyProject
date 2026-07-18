# include <iostream>
using namespace std;

class Fan {
	public:
	string brand;
	int speed;
	
	public:
		Fan (string brand, int speed){
			this->brand=brand;
			this->speed=speed;
		}
		
		void display () {
			cout << "Brand Name:" << brand << endl;
			cout << "Speed:" << speed;
		}
};

int main () {
	Fan f("Atomberg",5);
	
	f.display();
	
	return 0;
}
