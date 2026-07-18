# include <iostream>
using namespace std;

class Student {
	public:
		Student (){
			cout << "Object Created" << endl;
		}
		
		~Student (){
			cout << "Object Destroyed" << endl;
		}
};

int main () {
	Student s;
	cout << "Inside main Funtion" << endl;
	return 0;
}
