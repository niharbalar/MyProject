# include <iostream>
# include <string>
using namespace std;

class Animal {
	protected:
		int age;
		string name;
		
	public:	
		void setData () {
			cin.ignore();
			cout << "Enter name:";
			getline (cin,name);
			
			cout << "Enter age:";
			cin >> age;
		}
};

class Zebra : public Animal {
	protected:
		string origin;

	public:	
		void setZebra () {
			cin.ignore();
			cout << "Enter place of origin:";
			getline (cin,origin);
		}
		
		void getZebra () {
			cout << endl;
			cout << "Name:" << name << endl;
			cout << "Age:" << age << endl;
			cout << "Place of Origin:" << origin << endl;
		}
};

class Dolphin : public Animal {
	protected:
		string origin;

	public:	
		void setDolphin () {
			cin.ignore();
			cout << "Enter place of origin:";
			getline (cin,origin);
		}
		
		void getDolphin () {
			cout << endl;
			cout << "Name:" << name << endl;
			cout << "Age:" << age << endl;
			cout << "Place of Origin:" << origin << endl;
		}
};

int main () {
	Zebra z;
	Dolphin d;
	
	z.setData();
	z.setZebra();
	z.getZebra();
	
	d.setData();
	d.setDolphin();
	d.getDolphin();
	
	return 0;
}
