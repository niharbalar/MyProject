# include <iostream>
# include <string>
using namespace std;

class Store {
	private:
		int num,quan,tax,disc;
		string name;
		
	public:
		void getinfo () {
			cout << "Item Number:"<< endl;
			cin >> num;
			
			cin.ignore();
			cout << "Item Name:"<< endl;
			getline (cin,name);
			
			cout << "Item Quantity:"<< endl;
			cin >> quan;
			
			cout << "Tax:"<< endl; 
			cin >> tax;
			
			cout << "Discount:"<< endl;
			cin >> disc; 
		}
		
		void setInfo () {
			cout << "Item Number:" << num << endl;
			cout << "Item Name:" << name << endl;
			cout << "Item Quantity:" << quan << endl;
			cout << "Tax:" << tax << endl; 
			cout << "Discount:" << disc << endl; 			
		}
};

int main () {
	int id,pass;
	
	cout << "Enter User ID:" << endl;
	cin >> id;
	
	cout << "Enter Password:" << endl;
	cin >> pass;
	
	Store s;
	
	s.getinfo();
	s.setInfo();
	
	return 0;
}
