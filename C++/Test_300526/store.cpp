# include <iostream>
# include <string>
using namespace std;

class Store {
	public:
		int num,quan,tax,disc;
		string name;
		
	public:
		void getinfo () {
			cout << "Item Number:";
			cin >> num;
			
			cin.ignore();
			cout << "Item Name:";
			getline (cin,name);
			
			cout << "Item Quantity:";
			cin >> quan;
			
			cout << "Tax:"; 
			cin >> tax;
			
			cout << "Discount:";
			cin >> disc; 
			
			cout << endl;
		}
		
		void setInfo () {
			cout << "Item Number:" << num << endl;
			cout << "Item Name:" << name << endl;
			cout << "Item Quantity:" << quan << endl;
			cout << "Tax:" << tax << endl; 
			cout << "Discount:" << disc << endl; 			
		}
};

//func

int main () {
	int id,pass,i,j,k;
	
	cout << "Enter User ID:";
	cin >> id;
	
	cout << "Enter Password:";
	cin >> pass;
	
	cout << endl;
	
	Store s[3];
	
	for (k=0; k<3; k++){
		s[i].getinfo();
	}
		
	for(i=0; i<3; i++){
		for (j=i+1; j<3; j++){
			if (s[i].num >= s[j].num){
				Store temp;
				
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	
	for (k=0; k<3; k++){
		s[i].setInfo();
	}

	return 0;
}

//4
