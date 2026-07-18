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
		Circle (int radius) {
			this->radius = radius;
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
		Triangle (int base, int height) {
			this->base = base;
			this->height = height;
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
		Rectangle (int length, int width) {
			this->length = length;
			this->width = width;
		}
		
		void calculate () override {
			area = length*width;
		}
		
		void displayRectangle () {
			cout << "Area of rectangle is:" << area << endl;
		}
};

int main () {
	Circle c(1);
	c.calculate();
	c.displayCircle();
	
	Triangle t(2,3);
	t.calculate();
	t.displayTriangle();
	
	Rectangle r(4,5);
	r.calculate();
	r.displayRectangle();
	
	return 0;
}
