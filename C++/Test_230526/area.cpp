# include <iostream>
using namespace std;

class Circle;
class Rectangle{
	private:
		int l,w,area1;
		
	public:
		void getData (){
		
			cout << "Enter length of rectangle:";
			cin >> l;
			
			cout << "Enter width of rectangle:";
			cin >> w;
		}
		
		void calArea () {
			area1 = l*w; 
		}
		
		friend void displayData(Rectangle x, Circle y);
};

class Circle{
	private:
		int r,area2;
		
	public:
		void getData (){
		
			cout << "Enter radius of circle:";
			cin >> r;
		}
		
		void calArea () {
			area2 = 3.14*r*r; 
		}
		
		friend void displayData(Rectangle x, Circle y);
};

void displayData (Rectangle x, Circle y){
	cout << "Area of rectangle:" << x.area1 << endl;
	cout << "Area of circle:" << y.area2;
}


int main () {
	Rectangle a;
	Circle b;
	
	a.getData();
	a.calArea();
	b.getData();
	b.calArea();
	
	displayData(a, b);
	
	return 0;
}
