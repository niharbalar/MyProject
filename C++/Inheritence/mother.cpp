# include <iostream>
using namespace std;

class Mother {
	public:
		void displayMother () {
			cout << "This is the Mother Class" <<  endl;
		}
};

class Daughter : public Mother {
	public:
		void displayDaughter () {
			cout << "This is the Daughter Class" <<  endl;
		}
};

int main () {
	Daughter d;
	d.displayDaughter();
}
