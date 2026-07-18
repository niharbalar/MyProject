# include <iostream>
using namespace std;

class Area {
	public:
		int length,width,height,base,radius,area;
		
	public:
		virtual void calculate () = 0;
};

class Circle : public Area {
	public:
		void setCircle () {
			cout << "Enter radius of the circle:";
			cin >> radius;
		}
		
		void calculate () override {
			area = 3.14*radius*radius;
		}
		
		void displayCircle () {
			cout << "Area of circle is:" << area << endl;
		}
};

class Triangle : public Area {
	public:
		void setTriangle () {
			cout << "Enter base of the triangle:";
			cin >> base;
			
			cout << "Enter height of the triangle:";
			cin >> height;
		}
		
		void calculate () override {
			area = 0.5*base*height;
		}
		
		void displayTriangle () {
			cout << "Area of triangle is:" << area << endl;
		}
};

class Rectangle : public Area {
	public:
		void setRectangle () {
			cout << "Enter length of the rectangle:";
			cin >> length;
			
			cout << "Enter width of the rectangle:";
			cin >> width;
		}
		
		void calculate () override {
			area = length*width;
		}
		
		void displayRectangle () {
			cout << "Area of rectangle is:" << area << endl;
		}
};

int main () {
	Circle c;
	c.setCircle();
	c.calculate();
	c.displayCircle();
	
	Triangle t;
	t.setTriangle();
	t.calculate();
	t.displayTriangle();
	
	Rectangle r;
	r.setRectangle();
	r.calculate();
	r.displayRectangle();
	
	return 0;
}
