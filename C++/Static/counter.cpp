# include <iostream>
using namespace std;

void handleCounter () {
	static int count=0;
	
	count++;
	
	cout << "Counter:" << count << endl;
	
}

int main () {
	
	handleCounter ();
	handleCounter ();
	handleCounter ();
	handleCounter ();
	
	return 0;
}
