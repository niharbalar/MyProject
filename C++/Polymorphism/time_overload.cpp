# include <iostream>
using namespace std;

class Time {
	public:
		int hour, min, sec;
	
	public:
		Time (int hour=0, int min=0, int sec=0) {
			this->hour = hour;
			this->min = min;
			this->sec = sec;
		} 
		
		Time operator + (Time t) {
			Time temp;
			temp.sec = sec + t.sec;
			temp.min = min + t.min;
			temp.hour = hour + t.hour;
			
			if(temp.min >= 60){
				temp.hour += temp.min/60;
				temp.min = temp.min%60;
			}
			
			if(temp.sec >= 60){
				temp.min += temp.sec/60;
				temp.sec = temp.sec%60;
			}
			
			return temp;
		}
		
		void display () {
			cout << hour << " Hour " << min << " Minute " << sec << " Second " << endl;
		}
};
int main () {
	Time t1(5, 30, 60); 
	Time t2(4, 30, 60);
	Time t3=t1+t2;
	
	t3.display();

	return 0;
}
