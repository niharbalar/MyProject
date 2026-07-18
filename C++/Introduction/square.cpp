# include <iostream>
# include <cmath>
using namespace std;

int main () {
	
	int arr[50],i,n,sqr;
	
	cout << "Enter size of an array:";
	cin >> n;
	
	for (i=0; i<n; i++){
		cout << "Enter elements of an array:";
		cin >> arr[i];
	}
	
	for(i=0; i<n; i++){
		sqr = pow(arr[i], 0.5);
		cout << sqr << endl;
	}
	
	return 0;
}
