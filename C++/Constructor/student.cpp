# include <iostream>
using namespace std;

class Student {
	public:
		static int count;
		
		//Default Constructor
		Student () {
			count++;
			cout << "No. of Students:" << count << endl;
		}
};

int Student::count=0;

int main () {
	
	Student s1,s2,s3,s4;
	
	return 0;
}
