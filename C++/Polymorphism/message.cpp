# include <iostream>
# include <string>
using namespace std;

class Message {
	private:
		string message;
		
	public:
		Message (string msg = "Default Message") {
			message = msg;
		}
		
		void print () {
			cout << message << endl;
		}
		
		void print (string extraMessage) {
			cout << message << " " << extraMessage << endl;
		}
};

int main () {
	Message m1;
	Message m2 ("Hello World");
	
	m1.print();
	m2.print();
	
	m1.print("A");
	m2.print("B");
	
	return 0;
}
