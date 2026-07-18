# include <iostream>
# include <string>
using namespace std;

class FoodOrder {
	private:
		int id,amount;
		string name;
		
	public:
		FoodOrder() {
			amount=0;
		}
		
	void placeOrder() {
		cout << "Enter order id:" << endl;
		cin >> id; 
		
		cout << "Enter order amount:" << endl;
		cin >> amount;
		
		cin.ignore();
		cout << "Enter customer name:" << endl;
		getline(cin, name);
		
	}
	
	void displayOrder() {
		cout << endl;
		cout << "Order ID:" << id <<endl;
		cout << "Customer Name:" << name <<endl;
		cout << "Order Amount:" << amount <<endl;
	}
};

int main (){
	FoodOrder f1;
	
	f1.placeOrder();
	f1.displayOrder();
	
	return 0;
}
