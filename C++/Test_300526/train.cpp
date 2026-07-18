# include <iostream>
# include <string>
using namespace std;

class Train {
	public:
		int num;
		string name,destination,time,source;
		
	public:
		Train (int n,string na ,string s,string d,string t) {
			num = n;
			name = na;
			source = s;
			destination = d;
			time = t;
		}	
		
		void getinfo () {
			cout << "Train Number:" << num << endl;
			cout << "Train Name:" << name << endl;
			cout << "Train Source:" << source << endl;
			cout << "Train Destination:" << destination << endl; 
			cout << "Train Time:" << time << endl; 
		}
};

int main () {
	int details;
	
	Train t1(105,"A","Surat","Delhi","12:30");
	Train t2(2,"B","Surat","Assam","1:30");
	Train t3(3,"C","Surat","Ooty","2:30");

	cout << "Train number are 1,2,3!!" << endl;
	
	cout << "Enter train number to fetch the details:" << endl;
	cin >> details;
	
	if (details==1) {
		t1.getinfo();
		cout << endl;
	} else if (details==2) {
		t2.getinfo();
		cout << endl;
	} else if (details==3) {
		t3.getinfo();
		cout << endl;
	} else {
		cout << "Invalid Train number!!";
	}
	
	return 0;
}

//2
