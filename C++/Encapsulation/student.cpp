# include <iostream>
# include <string>
using namespace std;

class Student{
	public:
		int id,age;
		string name,course,city,email,college;
	
	public:
		void getData (){
		
			cout << "Enter Student ID:";
			cin >> id;

			cout << "Enter Student age:";
			cin >> age;
			
			cin.ignore();
						
			cout << "Enter Student name:";
			getline(cin, name);
			
			cout << "Enter Student course:";
			getline(cin, course);
			
			cout << "Enter Student email:";
			getline(cin, email);
			
			cout << "Enter Student city:";
			getline(cin, city);
			
			cout << "Enter Student college:";
			getline(cin, college);
			
		}
		
		void setData (){
			cout << "Student ID:" << id << endl;
			cout << "Student Name:" << name << endl;
			cout << "Student Age:" << age << endl;
			cout << "Student Course:" << course << endl;
			cout << "Student Email:" << email << endl;
			cout << "Student City:" << city << endl;
			cout << "Student College:" << college << endl;
		}
		
};

int main () {
	
	Student s[5];
	int i;
	
	for (i=0; i<1; i++){
		s[i].getData();
		s[i].setData();
	}
	
	s[0].course = "html";
	s[0].setData();
	return 0;
}
