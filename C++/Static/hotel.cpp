# include <iostream>
# include <string>
using namespace std;

class Hotel{
	public:
		int id,rating,year,staff,room;
		string type,city;
		static string name;
		
	
	public:
		void getData (){
		
			cout << "Enter Hotel ID:";
			cin >> id;

			cout << "Enter Hotel's Rating:";
			cin >> rating;
			
			cout << "Enter Hotel's Establish Year:";
			cin >> year;
			
			cout << "Enter Hotel's Staff Quantity:";
			cin >> staff;
			
			cout << "Enter Hotel's Room Quantity:";
			cin >> room;
			
			cin.ignore();

			cout << "Enter Hotel Type:";
			getline(cin, type);
		
			cout << "Enter Hotel City:";
			getline(cin, city);	
		}
		
		void setData (){
			cout << "Hotel ID:" << id << endl;
			cout << "Hotel Name:" << name << endl;
			cout << "Hotel Type:" << type << endl;
			cout << "Hotel Rating:" << rating << endl;
			cout << "Hotel City:" << city << endl;
			cout << "Hotel Establish Year:" << year << endl;
			cout << "Hotel Staff Quantity:" << staff << endl;
			cout << "Hotel Room Quantity:" << room << endl;
		}
		
};

string Hotel::name = "Meridian";

int main () {
	
	Hotel h[500];
	int i,n;
	
	cout << "Enter number of hotels:";
	cin >> n;
	
	for (i=0; i<n; i++){
		h[i].getData();
		h[i].setData();
	}
	return 0;
}
