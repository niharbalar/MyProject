# include <iostream>
using namespace std;

class Shopping {
	private:
		float price;
	
	public:
		Shopping (float price) {
			this->price=price;
		}
		
		friend void calcDiscount (Shopping item, float per);
};

void calcDiscount (Shopping item, float per) {
	float amount = item.price*per/100;
	float final = item.price-amount;
	
	cout << endl;
	cout << "Original Price:" << item.price << endl;
	cout << "Discount:" << per << "%" << endl;
	cout << "Dicounted Price:" << final << endl;
}

int main () {
	float price, discount;
	
	cout << "Enter item price:";
	cin >> price;
	
	cout << "Enter discount percentage:";
	cin >> discount;
	
	Shopping item(price);
	
	calcDiscount(item, discount);
	
	return 0;
}
