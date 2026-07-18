# include <iostream>
# include <string>
using namespace std;

class Employee {
	private:
		int id,salary;
		string name;
		
	public:
		string number,address;
		
	public:		
		//Parameterized Constructor
		Employee (int i,string n ,int s) {
			id = i;
			name = n;
			salary = s;
		}	
		
		void setData () {
			cin.ignore();
						
			cout << "Enter your Number:";
			getline(cin, number);
			
			cout << "Enter your Address:";
			getline(cin, address);
		}

		void getinfo () {
			cout << "ID:" << id << endl;
			cout << "Name:" << name << endl;
			cout << "Salary:" << salary << endl;
			cout << "Number:" << number << endl; 
			cout << "Address:" << address << endl; 
		}		
};

int main () {
	Employee e1(101, "Amit", 50000);
	e1.setData();
	e1.getinfo();
	
	return 0;
}
