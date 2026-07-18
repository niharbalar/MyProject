# include <iostream>
# include <string>
using namespace std;

class Car{
	public:
		int id,year;
		string name,color,model;
	
	public:
		void getData (){
			cout << "Enter your car ID:";
			cin >> id;
			
			cin.ignore();
			
			cout << "Enter your car's company name:";
			getline(cin, name);
			
			cout << "Enter your car color:";
			getline(cin, color);
			
			cout << "Enter your car model:";
			getline(cin, model);
			
			cout << "Enter your car's release year:";
			cin >> year;
			
		}
		
		void setData (){
			cout << "Car ID:" << id << endl;
			cout << "Car Company Name:" << name << endl;
			cout << "Car Color:" << color << endl;
			cout << "Car Model:" << model << endl;
			cout << "Car Release Year:" << year << endl;
		}
		
};

int main () {
	
	Car c1,c2,c3,c4;
	
	c1.getData();
	c1.setData();
	
	c2.getData();
	c2.setData();
	
	c3.getData();
	c3.setData();
	
	c4.getData();
	c4.setData();

	return 0;
}
