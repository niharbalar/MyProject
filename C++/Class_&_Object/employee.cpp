# include <iostream>
# include <string>
using namespace std;

class Employee{
	public:
		int id,age,salary,exp;
		string name,role,city,comp;
	
	public:
		void getData (){
			
			
			cout << "Enter your ID:";
			cin >> id;
			
			cin.ignore();
			
			cout << "Enter your name:";
			getline(cin, name);
			
			cout << "Enter your role:";
			getline(cin, role);
			
			cout << "Enter your age:";
			cin >> age;
			
			cout << "Enter your salary:";
			cin >> salary;
			
			cout << "Enter your experience:";
			cin >> exp;
			
			cin.ignore();
			
			cout << "Enter your city:";
			getline(cin, city);
			
			cout << "Enter your company name:";
			getline(cin, comp);
			
		}
		
		void setData (){
			cout << id << endl;
			cout << name << endl;
			cout << role << endl;
			cout << age << endl;
			cout << salary << endl;
			cout << exp << endl;
			cout << city << endl;
			cout << comp << endl;
		}
		
};

int main () {
	
	Employee e1,e2,e3,e4,e5;
	
	e1.getData();
	e1.setData();
	
	e2.getData();
	e2.setData();
	
	e3.getData();
	e3.setData();
	
	e4.getData();
	e4.setData();
	
	e5.getData();
	e5.setData();

	return 0;
}
