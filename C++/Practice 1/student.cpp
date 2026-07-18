# include <iostream>
# include <string>
using namespace std;

class Student {
	public:
		int roll,age,std;
		string name;
		
	public:
		void setData () {
			cout << endl;
			
			cin.ignore();
			cout << "Enter your name:";
			getline (cin, name);
			
			cout << "Enter your age:";
			cin >> this->age;
			
			cout << "Enter your roll call:";
			cin >> this->roll;
			
			cout << "Enter your standard:";
			cin >> this->std;	
			
			cout << endl;
		}
		
		void getData () {
			cout << endl;
			cout << "Name:" << name << endl;
			cout << "Age:" << this->age << endl;
			cout << "Roll Call:" << this->roll << endl;
			cout << "Standard:" << this->std << endl;
			cout << endl;
		}
};

int main () {
	int i,n;
	
	cout << "How many student details are required:";
	cin >> n;
	
	Student s[n];
	
	for (i=0; i<n; i++) {
		s[i].setData();
	}
	
	for (i=0; i<n; i++) {
		s[i].getData();
	}
	
	return 0;
}
