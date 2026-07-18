# include <iostream>
using namespace std;

class Student {
	protected:
		int roll;
		
	public:
		void getRoll () {
			cout << "Enter Roll Number:";
			cin >> roll;
		}
		
		void displayRoll () {
			cout << "Roll Number:" << roll <<endl;
		}			
};

class Test : public Student {
	protected:
		float marks1,marks2;
	
	public:
		void getMarks () {
			cout << "Enter Marks 1:";
			cin >> marks1;
			
			cout << "Enter Marks 2:";
			cin >> marks2;
		}
		
		void displayMarks () {
			cout << "Marks 1:" << marks1 <<endl;
			cout << "Marks 2:" << marks2 <<endl;
		}	
};

class Sports : public Student {
	protected:
		float sportsscore;
	
	public:
		void getSports () {
			cout << "Enter Sports Score:";
			cin >> sportsscore;
		}
		
		void displaySports () {
			cout << "Sports Score:" << sportsscore <<endl;
		}			
};

class Result : public Test, public Sports {
	protected:
		float total;
	
	public:
		void calculateTotal () {
			total = marks1 + marks2 + sportsscore;
		}
		
		void displayResult () {
			cout << endl;
			cout << "Roll Number:" << Test::roll <<endl;
			cout << "Marks 1:" << marks1 <<endl;
			cout << "Marks 2:" << marks2 <<endl;
			cout << "Sports Score:" << sportsscore <<endl;
			cout << "Total Score:" << total <<endl;
		}			
};

int main () {
	Result r;
	
	r.Test::getRoll();
	r.getMarks();
	r.getSports();
	r.calculateTotal();
	r.displayResult();
	
	return 0;
}
