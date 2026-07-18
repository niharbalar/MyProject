# include <iostream>
using namespace std;

class P {
	private:
		float temp;
		
	public:
		void getTemp () {
			cout << "Enter Temperature in Celsius:";
			cin >> temp;
		}
		
		float getCelsius () {
			return temp;
		}
};

class Q : public P {
	private:
		float fahrenheit;
		
	public:
		void toFahrenheit () {
			fahrenheit = (getCelsius()*9.0/5.0)+32;
			cout << "Temperature in Fahrenheit:" << fahrenheit << "F" << endl;
		}
		
	float getfahrenheit () {
		return fahrenheit;
	}
};

class R : public Q {
	private:
		float kelvin;
		
	public:
		void toKelvin () {
			kelvin = (getfahrenheit()-32)*5.0/9.0+273.15;
			cout << "Temperature in Kelvin:" << kelvin << "K" << endl;
		}
};

int main () {
	R r;
	r.getTemp();
	r.toFahrenheit();
	r.toKelvin();
	
	return 0;
}
