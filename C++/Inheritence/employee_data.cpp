# include <iostream>
# include <string>
using namespace std;

class A {
	protected:
		int id,salary,experience,contact;
		string name,role,comp_name,address,email;
	
	public:
		void setId(int id) {
			this->id = id;
		}
		
		void setName(string name) {
			this->name = name;
		}
		
		void setRole(string role) {
			this->role = role;
	}
};

class B : public A {
	public:
		void setSalary(int salary) {
			this->salary = salary;
		}
		
		void setExperience(int experience) {
			this->experience = experience;
		}
};

class C : public B {
	public:
		void setComp_Name(string comp_name) {
			this->comp_name = comp_name;
		}
		
		void setAddress(string address) {
			this->address = address;
		}
		
		string getName () {
			return name;
		}
		
		string getRole () {
			return role;
		}
		
		int getSalary () {
			return salary;
		}			
};

class D : public C {
	
	public:
		void setEmail(string email) {
			this->email = email;
		}
		
		void setcontact(int contact) {
			this->contact = contact;
		}
		
		int getId () {
			return id;
		}
		
		int getExperience () {
			return experience;
		}
		
		string getComp_Name () {
			return comp_name;
		}
			
		string getAddress () {
			return address;
		}
		
		string getEmail () {
			return email;
		}
		
		int getContact () {
			return contact;
		}
};

int main () {
	int id,salary,experience,contact;
	string name,role,comp_name,address,email;
	
	D d;
	
	cout << "Enter Employee ID:";
	cin >> id;
	d.setId(id);
	
	cin.ignore();
	cout << "Enter your Name:";
	getline(cin, name);	
	d.setName(name);
	
	cout << "Enter your Role:";
	getline(cin, role);	
	d.setRole(role);
	
	cout << "Enter your Salary:";
	cin >> salary;
	d.setSalary(salary);
	
	cout << "Enter your Working Experience:";
	cin >> experience;
	d.setExperience(experience);
	
	cin.ignore();
	cout << "Enter your Company Name:";
	getline(cin, comp_name);
	d.setComp_Name(comp_name);
	
	cout << "Enter your Address:";
	getline(cin, address);	
	d.setAddress(address);
	
	cout << "Enter your Email:";
	getline(cin, email);
	d.setEmail(email);
	
	cout << "Enter your Contact Number:";
	cin >> contact;
	d.setcontact(contact);
	
	cout << endl;
	cout << "ID:" << d.getId() << endl;
	cout << "Name:" << d.getName() << endl;
	cout << "Role:" << d.getRole() << endl;
	cout << "Salary:" << d.getSalary() << endl;
	cout << "Working Experience:" << d.getExperience() << endl;
	cout << "Company Name:" << d.getComp_Name() << endl;
	cout << "Address:" << d.getAddress() << endl;
	cout << "Email:" << d.getEmail() << endl;
	cout << "Contact Number:" << d.getContact() << endl;
	
	return 0;
}
