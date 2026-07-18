# include <iostream>
using namespace std;

class Cooking {
	public:
		virtual void heatFood () = 0;
};

class Microwave : public Cooking {
	private:
		void heatFood () override {
			cout << "Heating Food internally." << endl;
		}
		
	public:
		void Cooking () {
			cout << "Cooking Started." << endl;
			heatFood ();
			cout << "Cooking Completed." << endl;
		} 
};

int main () {
	Microwave m;
	
	m.Cooking();
	
	return 0;
}

//Cooking
//	pure virtual function
//	
//Microwave	inherit		Cooking
//	private:
//		function
//
//	override
//		call private func
//		extra details
//	
//main
	
		
