# include <iostream>
using namespace std;

class Shape {
	public: 
	virtual void Area () {
		cout << "Area undefined";
	}
};

class Rectangle : public Shape {
	private:
		float length, width;
		
	public:
		Rectangle (float l, float w) {
			length = l;
			width = w;
		}
		
		void Area () override {
		cout << "Area is:" << length*width << endl; ;
	}
};

class Triangle : public Shape {
	private:
		float base, height;
		
	public: 
		Triangle (float b, float h) {
			base = b;
			height = h;
		}
		
		void Area () override {
		cout << "Area is:" << 0.5*base*height << endl;
	}
};

class Circle : public Shape {
	private:
		float radius;
		
	public: 
		Circle (float r) {
			radius = r;
		}
		
		void Area () override {
		cout << "Area is:" << 3.14*radius*radius << endl;
	}
};

int main () {
	Shape* s;
	
	Rectangle r(10,20);
	Triangle t(30,40);
	Circle c(50);
	
	s=&r;
	s->Area();
	
	s=&t;
	s->Area();
	
	s=&c;
	s->Area();
	
	return 0;
}
