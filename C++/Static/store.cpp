# include <iostream>
#include <string>
using namespace std;

class Store{
	public:
		static float decideApp () {
			static string n;
			static float disc;
			
			cin.ignore();
			cout << "Enter the name of the appliance to buy:" << endl;
			getline(cin, n);
			
			if (n == "AC"){
				disc = 35000*0.05;
			} else if (n =="Refrigerator"){ 
				disc = 50000*0.07;
			} else if (n =="TV"){ 
				disc = 45000*0.09;
			}
			
			return disc;
		}
};

int main () {
	
	cout << "AC - 35000" << endl;
	cout << "Refrigerator - 50000" << endl;
	cout << "TV - 45000" << endl;

	cout << Store::decideApp();
	
	return 0;
}
