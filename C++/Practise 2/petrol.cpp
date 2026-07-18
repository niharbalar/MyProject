# include <iostream>
using namespace std;

class Petrol {
	public:
		Petrol (int a) {
			cout << "Petrol Constructor Called." << endl;
			
			if (a < 0) {
			throw "Amount should be higher than 20";
			}
		}	
};

class PetrolPump : public Petrol {
	public:
		PetrolPump (int a) : Petrol (a)  {
			if (a < 0) {
			throw "Amount should be higher than 20.";
			}
			cout << "PetrolPump Constructor Called." << endl;
		}
};

int main () {
	try {
		PetrolPump pp(-100);
	} catch (const char *c) {
		cout << c << endl;
	}
	
	return 0;
}
