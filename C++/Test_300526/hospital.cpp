# include <iostream>
# include <string>
using namespace std;

class Patient {
	private:
		int id;
		string name;
		
	public:
		static int total;
		
		Patient (){
			total++;
		}
		
		Patient (int i,string n) {
			id=i;
			name=n;
			total++;
		}
		
		void display (){
			cout << "Patient Id:" << id << endl;
			cout << "Patient Name:" << name << endl;
		}
		
		static void displayTotal (){
			cout << "Total Patients Admitted:" << total << endl;
		}
};

int Patient::total=0;

int main (){
	Patient p1(101,"A");
	Patient p2(102,"B");
	Patient p3(103,"C");
	Patient p4(104,"D");
	Patient p5(105,"E");
	
	cout << "Patient Deatils:" << endl;
	p1.display();
	p2.display();
	p3.display();
	p4.display();
	p5.display();
	
	Patient::displayTotal();
	return 0;
}
