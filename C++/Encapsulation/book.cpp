# include <iostream>
using namespace std;

class Book {
	public:
		int id;
		string name;
		
		//Parameterized Constructor
		Book (int i, string n) {
			id = i;
			name = n;
		}
		
		//Copy Constructor
		Book (const Book &b) {
			id = b.id;
			name = b.name;
		}
		
		void displayData () {
			cout << "ID:" << id << endl;
			cout << "Name:" << name << endl;
		}
};

int main () {
	
	Book b1(101,"Alpha");
	Book b2 = b1;
	
	b2.displayData();
	return 0;
}
