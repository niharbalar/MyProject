# include <iostream>
using namespace std;

class Cinema {
	private:
		static int totalTickets;
		
	public:
		void sellTicket (int ticket){
			totalTickets+=ticket;
			cout << ticket << " Tickets sold" << endl;
		}
		
		static void display () {
				cout << "Total Tickets sold:" << totalTickets <<  endl;
		}
};

int Cinema::totalTickets = 0;

int main () {
	Cinema c1,c2,c3;
	c1.sellTicket(50);
	c2.sellTicket(30);
	c3.sellTicket(20);
	
	Cinema::display();
	return 0;
}
