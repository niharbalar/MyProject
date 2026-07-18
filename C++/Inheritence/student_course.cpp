# include <iostream>
# include <string>
using namespace std;

class Student {
	public:
		int roll;
		string name;
		
	public:
		void setStudent () {
			cin.ignore();
			cout << "Enter your name:";
			getline (cin, name);
			
			cout << "Enter your roll call:";
			cin >> roll;
		}
		
		void getStudent () {
			cout << "Name:" << name << endl;
			cout << "Roll No:" << roll << endl;
		}
};

class Course : public Student {
	public:
		string course_name,course_duration;
		
	public:
		void setCourse () {
			setStudent ();
			
			cin.ignore();
			cout << "Enter your Course Name:";
			getline (cin, course_name);

			cout << "Enter your Course Duration:";
			getline (cin, course_duration);
		} 
		
		void displayAll () {
			getStudent ();
			cout << "Course Name:" << course_name << endl;
			cout << "Course Duration:" << course_duration << endl;
		}
};

int main () {
	
	Course c;
	c.setCourse();
	c.displayAll();
	
	return 0;
}
