# include <iostream>
# include <string>
using namespace std;

class Customer{
	private:
		int id,age,number,validity;
		string name,telecom,city;
	
	public:
		void getData (){
		
			cout << "Enter Customer ID:";
			cin >> id;

			cout << "Enter your age:";
			cin >> age;
			
			cout << "Enter your Mobile Number:";
			cin >> number;
			
			cout << "Enter your Simcard Validity in Years:";
			cin >> validity;
			
			cin.ignore();
						
			cout << "Enter your Name:";
			getline(cin, name);
			
			cout << "Enter your Telecom Brand Name:";
			getline(cin, telecom);
		
			cout << "Enter your City:";
			getline(cin, city);	
		}
		
		void setData (){
			cout << "Customer ID:" << id << endl;
			cout << "Customer Name:" << name << endl;
			cout << "Customer Age:" << age << endl;
			cout << "Customer Telecom Brand Name:" << telecom << endl;
			cout << "Customer Mobile Number:" << number << endl;
			cout << "Customer City:" << city << endl;
			cout << "Customer Simcard Validity:" << validity << endl;
		}
		
};

int main () {
	
	Customer c[5];
	int i;
	
	for (i=0; i<5; i++){
		c[i].getData();
		c[i].setData();
	}
	return 0;
}
