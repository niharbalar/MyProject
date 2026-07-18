# include <iostream>
using namespace std;

class Time2;
class Time1 {
	private:
		int hour1,min1,sec1;
	
	public:
		void getData () {
			
			cout << "Enter hour 1:";
			cin >> hour1;
			
			cout << "Enter min 1:";
			cin >> min1;
			
			cout << "Enter sec 1:";
			cin >> sec1;
			
		}
		
		friend void addTime(Time1 x, Time2 y);
};

class Time2 {
	private:
		int hour2,min2,sec2;
	
	public:
		void getData () {	
			cout << "Enter hour 2:";
			cin >> hour2;
			
			cout << "Enter min 2:";
			cin >> min2;
			
			cout << "Enter sec 2:";
			cin >> sec2;
		}
		
		friend void addTime(Time1 x, Time2 y);
};
		
void addTime (Time1 x, Time2 y) {
	int addHour, addMin, addSec;
		
	addHour = x.hour1+y.hour2;
	addMin = x.min1+y.min2;
	addSec = x.sec1+y.sec2;
			
	if(addMin >= 60) {
		addHour = addHour + (addMin/60);
		addMin = addMin%60;
	}
			
	if(addSec >= 60) {
		addMin = addMin + (addSec/60);
		addSec = addSec%60;
	}
	
	cout << addHour << " Hour " << addMin << " Min " << addSec << " Sec ";

}
	
int main () {
	
	Time1 t1;
	Time2 t2;
	
	t1.getData();
	t2.getData();
	
	addTime(t1, t2);

	return 0;
}
