# include <iostream>
using namespace std;

class Distance {
	public:
		int feet, inch;
	
	public:
		Distance (int feet=0, int inch=0) {
			this->feet = feet;
			this->inch = inch;
		} 
		
		Distance operator + (Distance d) {
			Distance temp;
			temp.inch = inch + d.inch;
			temp.feet = feet + d.feet;
			
			if(temp.inch >= 12){
				temp.feet += temp.inch/12;
				temp.inch = temp.inch%12;
			}
			
			return temp;
		}
		
		void display () {
			cout << feet << " Feet " << inch << " Inch " << endl;
		}
};
int main () {
	Distance d1(5,8); 
	Distance d2(3,10);
	Distance d3=d1+d2;
	
	d3.display();

	return 0;
}
