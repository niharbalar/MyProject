# include <iostream>
using namespace std;

class Employee {
	public:
		virtual void calculateSalary () {
			cout << "Employee Salary" << endl;
		}
};

class Manager : public Employee {
	private:
		int salary;
		
	public:
		Manager (int s) {
			salary = s;
		}
		
		void calculateSalary () override {
			cout << "Manager Salary:" << salary << endl;
		}
};

class Developer : public Employee {
	private:
		int salary;
		
	public:
		Developer (int s) {
			salary = s;
		}
		
		void calculateSalary () override {
			cout << "Developer Salary:" << salary << endl;
		}
};


int main () {
	Employee*emp;
	
	Manager m(100000);
	Developer d(50000);
	
	emp=&m;
	emp->calculateSalary();
	
	emp=&d;
	emp->calculateSalary();
	
	return 0;	
}
