#include <iostream>
#include <string>
using namespace std;

class LibraryBook	{
	private:
		int availableCopies;	// Numero available copies
		
	public:
		string title; // Title of the book
		string author; // Author of the book
		long ISBN; // ISBN number of the book
		
	void setCopies(int copies)	{ // Sets the available copies
		availableCopies = copies;
	}
	int getCopies()	{ // Returns the available copies
		return availableCopies;
	}
	void displayDetails() { // Displays book details (title, author, ISBN, and available copies)
		cout << "Book Title: " << title << ", Author: " << author << ", ISBN: " << ISBN << ", Available Copies: " << getCopies();
	}
};

int main()	{
	
	LibraryBook thisBook;
	string title;
	string author;
	long ISBN;
	int available;
	
	printf("Title: ");
	scanf("%s", &title);

	printf("Author: ");
	scanf("%s", &author);

	printf("ISBN: ");
	scanf("%d", &ISBN);

	printf("Available Copies: ");
	scanf("%d", &available);
	
	thisBook.title = title;
	thisBook.author = author;
	thisBook.ISBN = ISBN;
	thisBook.setCopies(available);
	
	thisBook.displayDetails(); 
	
	return 0;
}


