# include <iostream>
using namespace std;

class RBI {
	protected:
		float rate;
			
	public:
		void getROI () {
			cout << "Rate of Intrest:" << rate << "%" << endl;
		}
};

class SBI : public RBI {
	public:
		SBI () {
			rate = 6.5;
		}
};

class BOB : public RBI {
	public:
		BOB () {
			rate = 7.0;
		}
};

class ICICI : public RBI {
	public:
		ICICI () {
			rate = 6.8;
		}
};

int main () {
	SBI s;
	BOB b;
	ICICI i;
	
	cout << "SBI:";
	s.getROI();
	cout << "BOB:" ;
	b.getROI() ;
	cout << "ICICI:" ;
	i.getROI();
	
	return 0;
}
