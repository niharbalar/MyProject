# include <iostream>
# include <string>
using namespace std;

class MovieTicket {
	private:
		int seat,price;
		string name;
		
	public:
		MovieTicket(string n,int s,int p) {
			name=n;
			seat=s;
			price=p;
		}

	void displayTicket() {
		cout << "Movie Name:" << name <<endl;
		cout << "Seat Number:" << seat <<endl;
		cout << "Ticket Price:" << price <<endl;
		cout << endl;
	}
};

int main (){
	MovieTicket m1("A",4,400);
	MovieTicket m2("B",7,700);
	
	cout << "Ticket 1 Details:" << endl;
	m1.displayTicket();	
	
	cout << "Ticket 2 Details:" << endl;
	m2.displayTicket();	
	return 0;
}
