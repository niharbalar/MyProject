# include <iostream>
# include <string>
using namespace std;

class Student {
	public:
		int roll,age,std;
		string name;
		
	public:
		
		void setStudent () {
			
			cin.ignore();
			cout << "Enter your name:";
			getline (cin, name);
			
			cout << "Enter your age:";
			cin >> age;
			
			cout << "Enter your roll number:";
			cin >> roll;
			
			cout << "Enter your standard:";
			cin >> std;
		}
		
		void getStudent () {
			cout << "Name:" << name << endl;
			cout << "Age:" << age << endl;
			cout << "Roll No.:" << roll << endl;
			cout << "Standard:" << std << endl;
		}
};

class Course {
	public:
		string course,dura; 
		
	public:
		void setCourse (){
			Student stu;
			
			stu.getStudent();
			
			cin.ignore();
			cout << "Enter your course:";
			getline (cin, course);
		
			cout << "Enter your course duration:";
			getline (cin, dura);
		}
		
		void getCourse () {
			Student stu;
			
			stu.setStudent();
			cout << "Course:" << course << endl;
			cout << "Course Duration:" << dura << endl;
		}
};

int main (){
	Course c;
	c.setCourse();
	c.getCourse();
	return 0;
}
