# include <iostream>
using namespace std;

class Cricket {
	public: 
	virtual void getTotalOvers () {
		cout << "Total over in the match is:";
	}
};

class T20Match : public Cricket {
	public: 
	void getTotalOvers () override {
		cout << "Total over in the match is 20";
	}
};

class TestMatch : public Cricket {
	public: 
	void getTotalOvers () override {
		cout << "Total over in the match is not decided";
	}
};

int main () {
	Cricket* c;
	
	T20Match t20;
	c=&t20;
	c->getTotalOvers();
	
	TestMatch test;
	c=&test;
	c->getTotalOvers();
	
	return 0;
}

