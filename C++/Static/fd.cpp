# include <iostream>
# include <string>
using namespace std;

class Bank {
	public:
		static float fdInt1,fdInt2,fdInt3;
		
	private:
		int amt,balance=0,depAmt,wdAmt,fdIntr=0,fdYear,fdAmt;
		string name,add,mail,number;
	
	public:

// 1
		void createAccount () {
			cin.ignore();
			
			cout << "Enter your Name:";
			getline(cin, name);
			
			cout << "Enter your Mobile Number:";
			getline(cin, number);
			
			cout << "Enter your Email:";
			getline(cin, mail);
		
			cout << "Enter your Address:";
			getline(cin, add);	
		}
		
//2
		void deposit () {
			cout << "Enter amount to deposit:";
			cin >> depAmt;
			
			balance = balance + depAmt;
		}
		
//3
		void withdraw () {
			cout << "Enter amount to withdraw:";
			cin >> wdAmt;
			
			balance = balance - wdAmt;
		}
		
//4
		void FDdata () {	
			cout << "Enter FD Amount:";
			cin >> amt;
		}
		
//5		
		void infoFDIntrest () {
			cout << "FD Intrest for 1 year will be:" <<amt*1*fdInt1<< endl;
			cout << "FD Intrest for 2 year will be:" <<amt*2*fdInt2 << endl;
			cout << "FD Intrest for 3 year will be:" <<amt*3*fdInt3<< endl;
		}

//6
		void calcIntrest () {
			cout << "Enter final FD Amount:";
			cin >> fdAmt;
			
			cout << "Enter final FD Year:";
			cin >> fdYear;
			
			if (balance >= fdAmt){
				if (fdYear==1){
					fdIntr=fdAmt*fdYear*fdInt1;
				} else if (fdYear==2){
					fdIntr=fdAmt*fdYear*fdInt2;
				} else if (fdYear>=3){
					fdIntr=fdAmt*fdYear*fdInt3;
				} 
				displayFDInfo();
			} else {
				cout << "Insufficient amount for FD." << endl;
			}
		}
		
		void displayUserInfo () {
			cout << "Name:" << name << endl;
		}
				
		void displayFDInfo () {
			cout << "FD Amount:" << fdAmt << endl;
			cout << "FD Year:" << fdYear << endl;
			cout << "FD Intrest:" << fdIntr << endl;
		}				
};

float Bank::fdInt1=0.06;
float Bank::fdInt2=0.07;
float Bank::fdInt3=0.08;

int main () {
	
	Bank b[3];
	int i;
	
	for (i=0; i<3; i++){
		b[i].createAccount();
		b[i].deposit();
		b[i].withdraw();
		b[i].FDdata();
		b[i].infoFDIntrest();
		b[i].calcIntrest();
		b[i].displayUserInfo();
		b[i].displayFDInfo();
	}
	return 0;
}
