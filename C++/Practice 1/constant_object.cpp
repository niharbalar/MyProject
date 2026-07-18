# include <iostream>
using namespace std;

class Book {
	private:
		string bookName, author;
		
	public:
		Book (string bookName, string author) {
			this->bookName=bookName;
			this->author=author;
		}
		
		void display () const {
			cout << bookName << endl;
			cout << author;
		}
};

int main () {
	const Book b ("A", "B");
	b.display();
	
	return 0;
}

