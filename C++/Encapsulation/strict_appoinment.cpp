# include <iostream>
#include <string>
using namespace std;

class Appointment{
	private:
		string name,age,time,date;
		
	public:
		void setName(string n) {
			name = n;
		}
		
		string getName () {
			return name;
		}
		
		void setAge (string a) {
			age = a;
		}
		
		string getAge () {
			return age;
		}
		
		void setDate (string d) {
			date = d;
		}
		
		string getDate () {
			return date;
		}
		
		void setTime (string t) {
			time = t;
		}
		
		string getTime () {
			return time;
		}
};

int main () {
	string name,age,time,date;
	
	Appointment a;
	
	cin.ignore();
	
	cout << "Enter your name:";
	getline(cin, name);	
	a.setName(name);
	
	cout << "Enter your age:";
	getline(cin, age);	
	a.setAge(age);
	
	cout << "Enter your date for the appoinment:";
	getline(cin, date);	
	a.setDate(date);
	
	cout << "Enter your time for the appoinment:";
	getline(cin, time);
	a.setTime(time);
	
	cout << "Your Appointment is booked." << endl;
	cout << "Name:" << a.getName() << endl;
	cout << "Age:" << a.getAge() << endl;
	cout << "Date:" << a.getDate() << endl;
	cout << "Time:" << a.getTime() << endl;
	
	
	return 0;
}
