# include <iostream>
using namespace std;

class Demo{
	
	public:
		static int count;
		Demo () {
			count ++;
			cout << "Object created" << endl;		
		}

		void displayData () {
			cout << "Total Object Created:" << count << endl;
		}
};

int Demo:: count = 0;

int main () {
	
	Demo d1,d2,d3,d4;
	
	d4.displayData();
	
	return 0;
}
