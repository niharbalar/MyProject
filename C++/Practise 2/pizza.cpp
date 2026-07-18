# include <iostream>
# include <string>
using namespace std;

class FoodItem {
	protected:
		string name;
		int price;
		
	public:
		void setFood (string name, int price){
			this->name=name;
			this->price=price;
		}			
};

class Pizza : public FoodItem {
	private:
		string size;
		
	public:
		void setPizza(string name, int price, string size){
			setFood (name, price);
			this->size=size;
		}
		
		void display () {
			cout << "Pizza Name:" << name << endl;
			cout << "Price:" << price << endl;
			cout << "Size:" << size << endl;
		}
};

int main (){
	Pizza p;
	p.setPizza("Farm Fresh",899,"Medium");
	p.display();
	
	return 0;
}
