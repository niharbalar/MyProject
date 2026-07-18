# include <iostream>
using namespace std;

class Product{
	
	public:
		static int count;
		Product () {
			count ++;		
		}

		void displayData () {
			cout << "Total Inventory:" << count << endl;
		}
};

int Product:: count = 0;

int main () {
	
	Product p1,p2,p3,p4;
	
	p4.displayData();
	
	return 0;
}
