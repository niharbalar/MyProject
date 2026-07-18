# include <iostream>
# include <string>
using namespace std;

class PersonalInfo {
	public:
		int id;
		string name;
	
	public:
		void getPersonalInfo () {
			cout << "Enter Employee ID:";
			cin >> id;
			
			cin.ignore();
			cout << "Enter your Name:";
			getline (cin, name);
		}
};

class SalaryInfo {
	public:
		int salary;

	public:
		void getSalaryInfo () {
			cout << "Enter your Salary:";
			cin >> salary;
		}
};

class Employee : public PersonalInfo, public SalaryInfo {
	public:
		void display () {
			cout << endl;
			cout << "ID:" << id << endl;
			cout << "Name:" << name << endl;
			cout << "Salary:" << salary << endl;
		}
};

int main () {
	Employee e;
	e.getPersonalInfo();
	e.getSalaryInfo();
	e.display();
	
	return 0;
}
