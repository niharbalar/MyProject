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
		sqr = arr[i]*arr[i]*arr[i];
		cout << sqr << endl;
	}
	
	return 0;
}
