# include <iostream>
# include <string>
using namespace std;

class Sports {
	public:
		int f_team,t_team;
		string f_name,t_name;
	
	public:	
		virtual void myAccess () = 0;
};

class Football : public Sports {
	public:
		
		Football (string f_name, int f_team) {
			this->f_name = f_name;
			this->f_team = f_team;
		}
		
		void myAccess () override {
			cout << endl;
			cout << "---- Football Details ----" << endl;
			cout << "Tournament Name :" << f_name << endl;	
			cout << "Total Teams:" << f_team << endl;
			cout << endl;
		}
};

class Tennis : public Sports {
	public:
		Tennis (string t_name, int t_team) {
			this->t_name = t_name;
			this->t_team = t_team;
		}
		
		void myAccess () override {
			cout << endl;
			cout << "---- Tennis Details ----" << endl;
			cout << "Tournament Name :" << t_name << endl;	
			cout << "Total Players:" << t_team << endl;
			cout << endl;
		}
};

int main () {
	Football f("A", 10);
	f.myAccess();
	
	Tennis t("B",20);
	t.myAccess();
	
	return 0;
}
