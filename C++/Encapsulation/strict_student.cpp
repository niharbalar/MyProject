# include <iostream>
using namespace std;

class Student{
	private:
		float per;
		
	public:
		void setPer (float p) {
			per = p;
		}
		
		float getPer () {
			return per;
		}
};

int main () {
	Student s;
	
	s.setPer(84.7);
	
	cout << "Percentage is:" << s.getPer();
	
	return 0;
}
