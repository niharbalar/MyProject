# include <iostream>
using namespace std;

class Result {
	public:
		int marks;
		
	public:
		Result (int m) {
			marks = m;
		}
		
	Result operator && (Result obj) {
		if (marks>70 && obj.marks>80) {
			return 90;
		}
	}
	
	void display () {
		cout << marks;
	}
};

int main () {
	int a,b;
	
	cout << "Enter marks of two test: ";
	cin >> a >> b;
	
	Result r1(a), r2(b);
	Result r3 = r1 && r2;
	
	cout << r3.marks;
	
//	if (a >= 33 && b >= 33) {
//		cout << "Pass";
//	} else if (a <= 33 && b >= 33) {
//		cout << "Pass in one test only";
//	} else if (a >= 33 && b <= 33) {
//		cout << "Pass in one test only";
//	} else if (a <= 33 && b <= 33) {
//		cout << "Fail";
//	}
//	
	
	return 0;
}
