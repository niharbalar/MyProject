# include <iostream>
# include <string>
using namespace std;

class Train {
	public:
		int num;
		string name,destination,time,source;
		
	public:
		//Parameterized Constructor
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
	Train t1(1,"A","Surat","Delhi","12:30");
	Train t2(2,"B","Surat","Assam","1:30");
	Train t3(3,"C","Surat","Ooty","2:30");
	
	t1.getinfo();
	cout << endl;
	t2.getinfo();
	cout << endl;
	t3.getinfo();
	
	return 0;
}
