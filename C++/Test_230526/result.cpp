# include <iostream>
# include <string>
using namespace std;

class Result{
	
	private:
		int p,c,m,e,d,total;
		float per;
		string grade;
		
	public:
		void getData (){
		
			cout << "Enter marks of Physics:";
			cin >> p;
			
			cout << "Enter marks of Chemistry:";
			cin >> c;
			
			cout << "Enter marks of Maths:";
			cin >> m;
			
			cout << "Enter marks of English:";
			cin >> e;
			
			cout << "Enter marks of Data Entry:";
			cin >> d;
		}
		
		void setData (){
			total = p+c+m+e+d;
			per = total/5;
			
			if (per <= 100 && per >=90){
				grade = 'A';
			}

		}
		
		void displayData () {
			cout << "Total Marks:" << total << endl;
			cout << "Percentage:" << per << endl;
			cin.ignore();
			cout << "Grade:" << grade << endl;
		}
		
};

int main () {
	
	Result r[5];
	int i;
	
	for (i=0; i<5; i++) {
		r[i].getData();
		r[i].setData();
		r[i].displayData();
	}


	return 0;
}
