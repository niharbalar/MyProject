# include <iostream>
using namespace std;

int factorial(int n){
	int fact=1,i;
	
	for(i=n; i>=1; i--){
		fact=fact*i;
	}

	return fact;

}

int main () {
	
	int arr[50],i,n;
	
	cout << "Enter size of an array:";
	cin >> n;
	
	for (i=0; i<n; i++){
		cout << "Enter elements of an array:";
		cin >> arr[i];
	}
	
	for (i=0; i<n; i++){
		arr[i]=factorial(arr[i]);
	}
	
	for (i=0; i<n; i++){
		cout << arr[i] << endl;
	}
	
	
	return 0;
}
