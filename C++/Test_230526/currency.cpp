# include <iostream>
using namespace std;

class Currency{
	
	public:
		static int inr,usd,inrc,usdc;
		
		Currency () {
			cout << "INR:" << inr << endl;	
		}
		
		void converter() {
			inrc = inr/96;
			usdc = usd*96;
		}
		
		void displayData () {
			cout << "INR to USD:" << inrc << endl;
			cout << "USD to INR:" << usdc << endl;
		}
};

int Currency:: inr = 96;
int Currency:: usd = 1;

int main () {
	
	Currency c;
	
	c.converter();
	c.displayData();
	
	return 0;
}
