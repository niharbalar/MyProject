# include <iostream>
using namespace std;

class IndiaStates {
	private:
		static int totalStates;
		
		public:
			static void displayStates () {
				cout << "Gujarat, Goa, Rajasthan, Maharastra, Delhi, Sikkim, Assam, Kerela, Karnataka, Tamil Nadu, Telanga, Madhya Pradesh, Arunachal Pradesh, Jharkhand, Haryana, Odisha, Bihar, Punjab, Manipur, Mizoram, West Bengal, Himachal Pradesh, Uttar Pradesh, Uttrakhand" << endl;
				cout << "States:" << totalStates << endl;		
		}
};

int IndiaStates::totalStates=28;

int main () {
	IndiaStates::displayStates();
	return 0;
}
