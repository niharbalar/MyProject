# include <iostream>
using namespace std;

class Time{
	public:
		int hour1, hour2, min1, min2, sec1, sec2, addHour, addMin, addSec;
	
	public:
		void getData (){
			
			cout << "Enter hour 1:";
			cin >> hour1;
			
			cout << "Enter min 1:";
			cin >> min1;
			
			cout << "Enter sec 1:";
			cin >> sec1;
			
			cout << "Enter hour 2:";
			cin >> hour2;
			
			cout << "Enter min 2:";
			cin >> min2;
			
			cout << "Enter sec 2:";
			cin >> sec2;
		}
		
		void addTime (){
			
			addHour = hour1+hour2;
			addMin = min1+min2;
			addSec = sec1+sec2;
			
			if(addMin >= 60){
				addHour = addHour + (addMin/60);
				addMin = addMin%60;
			}
			
			if(addSec >= 60){
				addMin = addMin + (addSec/60);
				addSec = addSec%60;
			}
		}
		
		void displayData(){
			cout << addHour << " Hour " << addMin << " Min " << addSec << " Sec ";
		}
		
};

int main () {
	
	Time t;
	
	t.getData();
	t.addTime();
	t.displayData();

	return 0;
}
