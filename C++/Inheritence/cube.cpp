# include <iostream>
using namespace std;

class X {
	public:
		int a,b,c;
};

class Y : public X {
	public:
		int ca,cb,cc,sum;
		
	void setY () {
		cout << "Enter value of a:";
		cin >> a;
			
		cout << "Enter value of b:";
		cin >> b;
			
		cout << "Enter value of c:";
		cin >> c;
		
		ca=a*a*a;
		cb=b*b*b;
		cc=c*c*c;
		
		sum = ca+cb+cc;	
	}
	
	void getY () {
		cout << endl;
		cout << "Cube of value a:" << ca << endl;
		cout << "Cube of value b:" << cb << endl;
		cout << "Cube of value c:" << cc << endl;
		cout << endl;
		cout << "Sum:" << sum << endl;
	}
};

int main () {
	
	Y y;
	y.setY();
	y.getY();
	
	return 0;
}
