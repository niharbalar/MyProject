# include <iostream>
using namespace std;

class Time{
	public:
		int Sec,Hour,Min,totalSec;
	
	public:
		void getData (){
			
			cout << "Enter seconds:";
			cin >> totalSec;
		}
		
		void addTime (){
			
			Hour = 	totalSec/3600;
			Min	= (totalSec%3600)/60;
			Sec = totalSec%60;
		}
		
		void displayData(){
			cout << Hour << ":" << Min << ":" << Sec;
		}
		
		
};

int main () {
	
	Time t;
	
	t.getData();
	t.addTime();
	t.displayData();

	return 0;
}
