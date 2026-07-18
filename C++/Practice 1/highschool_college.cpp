# include <iostream>
# include <string>
using namespace std;

class HighSchool{
	private:
		int roll,std,age;
		string name;
		
	public:
		void setName(string name) {
			this->name = name;
		}
		string getName () {
			return name;
		}
		
		void setAge (int age) {
			this->age = age;
		}
		int getAge () {
			return age;
		}
		
		void setRoll (int roll) {
			this->roll = roll;
		}
		int getRoll () {
			return roll;
		}
		
		void setStd (int std) {
			this->std = std;
		}
		int getStd () {
			return std;
		}
};

class College{
	private:
		int id,cont;
		string insti,add;
		
	public:
		void setId (int id) {
			this->id = id;
		}
		int getId () {
			return id;
		}
		
		void setCont (int cont) {
			this->cont = cont;
		}
		int getCont () {
			return cont;
		}
		
		void setInsti(string insti) {
			this->insti = insti;
		}
		string getInsti () {
			return insti;
		}
		
		void setAdd(string add) {
			this->add = add;
		}
		string getAdd () {
			return add;
		}
};

int main () {
	int roll,std,age;
	string name;
	
	HighSchool h;
	
	cin.ignore();
	cout << "Enter your name:";
	getline(cin, name);	
	h.setName(name);
	
	cout << "Enter your age:";
	cin >> age;
	h.setAge(age);
	
	cout << "Enter your roll number:";
	cin >> roll;
	h.setRoll(roll);
	
	cout << "Enter your standard:";
	cin >> std;
	h.setStd(std);
	
	int id,cont;
	string insti,add;
	
	College c;
	
	cout << "Enter your ID:";
	cin >> id;
	c.setId(id);
	
	cout << "Enter your contact number:";
	cin >> cont;
	c.setCont(cont);
	
	cout << "Enter your institution name:";
	cin >> insti;
	c.setInsti(insti);
	
	cout << "Enter your address:";
	cin >> add;
	c.setAdd(add);
	
	cout << endl;
	cout << "Name:" << h.getName() << endl;
	cout << "Age:" << h.getAge() << endl;
	cout << "Roll No.:" << h.getRoll() << endl;
	cout << "Standard:" << h.getStd() << endl;
	cout << endl;
	cout << "ID:" << c.getId() << endl;
	cout << "Contact No.:" << c.getCont() << endl;
	cout << "Institution Name:" << c.getInsti() << endl;
	cout << "Address:" << c.getAdd() << endl;	
		
	return 0;
}
