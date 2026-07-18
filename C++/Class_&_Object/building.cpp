# include <iostream>
using namespace std;

class Building {
	public:
		int l;
		int w;
	
	public:
		void getData (){
			cout << "Enter length:";
			cin >> l;
		
			cout << "Enter width:";
			cin >> w;
		}
	
		void calcArea(){
			cout << "Area of building is:" << l*w << endl;
		}
			
};

int main () {
	
	Building b1,b2;
	
	b1.getData();
	b1.calcArea();
	
	b2.getData();
	b2.calcArea();
	
	return 0;
}
