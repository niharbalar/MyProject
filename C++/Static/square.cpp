# include <iostream>
using namespace std;

class Square{
	public:
		static void squarenum (int n) {
			cout << "Square of the number is:" << n*n << endl;
		}
};

int main () {
	
	Square::squarenum(4);
	Square::squarenum(7);
	
	return 0;
}
