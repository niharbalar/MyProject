# include <iostream>
using namespace std;

class Distance{
	public:
		int feet1, feet2, inch1, inch2, addFeet, addInch;
	
	public:
		void getData (){
			
			cout << "Enter feet 1:";
			cin >> feet1;
			
			cout << "Enter inch 1:";
			cin >> inch1;
			
			cout << "Enter feet 2:";
			cin >> feet2;
			
			cout << "Enter inch 2:";
			cin >> inch2;
		}
		
		void addDistance (){
			
			addFeet = feet1+feet2;
			addInch = inch1+inch2;
			
			if(addInch >= 12){
				addFeet = addFeet + (addInch/12);
				addInch = addInch %12;
			}
		}
		
		void displayData(){
			cout << addFeet << " feet " << addInch << " inch ";
		}
		
};

int main () {
	
	Distance d;
	
	d.getData();
	d.addDistance();
	d.displayData();

	return 0;
}
