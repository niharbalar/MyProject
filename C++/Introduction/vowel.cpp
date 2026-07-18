# include <iostream>
using namespace std;

int main () {
	
	char in;
	
	cout << "Enter your input:";
	cin >> in;
	
	if(in=='a'||in=='e'||in=='i'||in=='o'||in=='u'){
		cout << "Vowel";
	} else {
		cout << "Consonants";
	}
	return 0;
}
