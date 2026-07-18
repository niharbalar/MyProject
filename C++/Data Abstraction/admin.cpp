# include <iostream>
# include <string>
using namespace std;

class Admin {
	public:
		int manager_salary,employee_salary,total_staff,total_annual_revenue;
		string company_name,can_terminate;
	
	public:	
		virtual void myAccess () = 0;
		
		void setDataM () {
			cin.ignore();
			cout << "Enter your Company Name:";
			getline (cin, company_name);
			
			cout << "Enter your Salary(Manager):";
			cin >> manager_salary;
			
			cout << "Enter your Total Staff:";
			cin >> total_staff;
			
			cout << "Enter your Total Annual Revenue:";
			cin >> total_annual_revenue;
		}
		
		void setDataE () {
			cin.ignore();
			cout << "Enter your Company Name:";
			getline (cin, company_name);
				
			cout << "Enter your Salary(Employee):";
			cin >> employee_salary;
				
			cin.ignore();
			cout << "Can your Company Terminate you:";
			getline (cin, can_terminate);
		}
};

class Manager : public Admin {
	public:
		void myAccess () override {
			cout << endl;
			cout << "---- Manager Details ----" << endl;
			cout << "Company Name:" << company_name << endl;
			cout << "Salary (Manager):" << manager_salary << endl;
			cout << "Total Staff:" << total_staff << endl;
			cout << "Total Annual Revenue:" << total_annual_revenue << endl;
			cout << endl;
		}
};

class Employee : public Manager {
	public:
		void myAccess () override {
			cout << endl;
			cout << "---- Employee Details ----" << endl;
			cout << "Company Name:" << company_name << endl;
			cout << "Salary (Employee):" << employee_salary << endl;
			cout << "Terminate:" << can_terminate << endl;
		}
};

int main () {
	Manager m;
	Employee e;
	
	m.setDataM();
	m.myAccess();
	
	e.setDataE();
	e.myAccess();
	
	return 0;
}
