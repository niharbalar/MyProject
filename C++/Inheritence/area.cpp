# include <iostream>
using namespace std;

class Shape {
	private:
		int width,height;
		
	public:
		Shape (int w, int h) { 
			width = w;
			height = h;
		}
		
		int getWidth () {
			return width;
		}
		
		int getHeight () {
			return height;
		}
};

class Triangle : public Shape {
	public:
		Triangle (int w, int h) : Shape(w, h) {
		
		}
		
		int area () {
			return (getWidth()*getHeight())/2;
		}
};

class Rectangle : public Shape {
	public:
		Rectangle (int w, int h) : Shape(w, h) {
		}
		
	int area () {
		return getWidth()*getHeight();
	}
};

int main () { 
	Triangle t(10,5);
	Rectangle r(10,5);
	
	cout << "Area of Triangle:" << t.area() << endl;
	cout << "Area of Rectangle:" << r.area() << endl;
}
