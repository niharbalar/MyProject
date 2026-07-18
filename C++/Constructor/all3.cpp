# include <iostream>
using namespace std;

class Store {
	private:
		int id;
		string name;
		
	public:
		//Default Constructor
		Store () {
			id = 0;
			name = " ";
		}
		
		//Parameterized Constructor
		Store (int i, string n) {
			id = i;
			name = n;
		}
		
		//Copy Constructor
		Store (const Store &s) {
			id = s.id;
			name = s.name;
		}
		
		void displayData () {
			cout << "ID:" << id << endl;
			cout << "Name:" << name << endl;
		}
};

int main () {
	Store s1;
	s1.displayData();
	cout << endl;
	
	Store s2(101,"Rice");
	s2.displayData();
	cout << endl;
	
	Store s3 = s2;
	s3.displayData();
	
	return 0;
}
