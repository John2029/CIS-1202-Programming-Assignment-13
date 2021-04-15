
//PublicationDriver.cpp
// John May
// CIS 1202
// PublicationDriver
#include "Publication.h"
#include "PersonalLibrary.h"

void getPublicationInfo(Publication&);
int storePublication(Publication[]);//,int&
void checkOut(Publication&);
void checkIn(Publication&);
void getPublications(Publication[]);// , int&
void showTitles(Publication[]);//, int
int findPublication(Publication[], int, string);
void displayInfo(Publication);

int main() {
	
	/* getPublications (to read the input file into the array)*/
	
	const int max = 50;
	Publication Publications[max]{};
	int numTitles = 0;
	int choice = 1;
	string itemName;
	do {
		int choice = displayMenu("1. Display All Publications\n2. Display Publication Titles\n3. Find a Publication \n4. Check Out \n5. Check In \n6. Exit\n", 1, 6);
	switch (choice) {
	case 1:
		// all publications
		cout << "All Publications (test)\n";
		numTitles = storePublication(Publications/*, max*/);
		break;
	case 2:
		// show titles
		cout << "Show Titles (test)\n";
		showTitles(Publications/*,max*/);
		break;
	case 3:
		// find publication
		cout << "Find Publication (test)\n";
		findPublication(Publications, numTitles, itemName);
		break;
	case 4:
		// check out
		cout << "Check out (test)\n";
		//checkOut();
		break;
	case 5:
		// check in
		cout << "Check in (test)\n";
		//checkIn();
		break;
	case 6:
		// exit
		cout << "Exiting . . .\n";
		endFile();
		return 0;
		break;
	}
	} while (choice != 6);
}

void getPublicationInfo(Publication& book1) {

	string title = book1.Publication::getTitle();
	cout << "the title is: " << title << endl;
	string publisher = book1.Publication::getPublisher();
	cout << "Publisher: " << publisher << endl;
	double price = book1.Publication::getPrice();
	cout << "Price: " << price << endl;
	int year = book1.Publication::getYear();
	cout << "Year: " << year << endl;
	string items = book1.Publication::getPublicationType(1);
	cout << "Publication Type: " << items << endl;
	int stock = book1.Publication::getStock();
	cout << "Stock: " << stock << endl;

}

int storePublication(Publication Publications[]) //, const int &max
{
	
	ifstream Input;
	ofstream Output;
	string fileName = "Books";
	string location = "C:\\users\\may54721\\desktop";

	int numTitles = 0;
	int i = 0;
	int j = 0;
	string itemTitle, itemPublisher;
	double itemPrice;
	int itemYear, itemType, itemStock;

	Input.open(location + "\\" + fileName + ".txt");

	if (Input.is_open())
	{
		while (getline(Input, itemTitle)) 
		{
			getline(Input, itemPublisher);
			Input >> itemPrice;
			Input >> itemYear;
			Input >> itemType;
			Input >> itemStock;
			Input.ignore(100, '\n');
			cout << itemTitle << endl << itemPublisher << endl << "$" << itemPrice << endl << itemYear << endl << itemType << endl << itemStock << " in stock" << endl;
			i++;
			numTitles++;
			
		}
	}
	return numTitles;
}

int findPublication(Publication Publications[], int numItems, string itemName)
{
	ifstream Input;
	ofstream Output;

	string enteredName;
	cin.ignore(100, '\n');
	cout << "Enter Title: ";
	getline(cin, itemName);
	int i = 0;

	while (i < numItems && Publications[i].getTitle() != itemName) {
		
		i++; // increment until it finds or is done looking through each.
		
	}
	if (i < numItems)
	{
		cout << "Found" << endl;
		displayInfo(Publications[i]); // calls the function to display
		return 1;
	}
	else
	{
		cout << "Title not found" << endl;
	}
}
void displayInfo(Publication Publications) 
{
	cout << "Title = " << Publications.getTitle() << endl;

}
void checkOut(Publication& book1) 
{
	int stock = book1.Publication::getStock();
	if (stock >= 1)
		book1.setStock(stock - 1);
}
void checkIn(Publication& book1) 
{
	int stock = book1.Publication::getStock();
	book1.setStock(stock + 1);
}
void showTitles(Publication[])//, const int max
{
	ifstream Input;
	ofstream Output;
	string fileName = "Books";
	string location = "C:\\users\\may54721\\desktop";

	int numTitles = 0;
	int i = 0;
	int j = 0;
	string itemTitle, itemPublisher;
	double itemPrice;
	int itemYear, itemType, itemStock;

	Input.open(location + "\\" + fileName + ".txt");

	if (Input.is_open())
	{
		while (getline(Input, itemTitle))
		{
			getline(Input, itemPublisher);
			Input >> itemPrice;
			Input >> itemYear;
			Input >> itemType;
			Input >> itemStock;
			Input.ignore(100, '\n');
			cout << itemTitle << endl;
			i++;
			numTitles++;
		}
	}
}
void getPublications(Publication Publications[], const int& max)
{

}