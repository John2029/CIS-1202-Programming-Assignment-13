//publication.h

// John May
// CIS 1202 101
// March 25, 2021

#pragma once
#ifndef PUBLICATION_H
#define PUBLICATION_H

#include <string>

using namespace std;

class Publication { // everything between defines this class
private:
	string title;
	string publisher;
	double price;
	int year;
	enum PublicationType { BOOK, MAGAZINE, NEWSPAPER, AUDIO, VIDEO };
	int stock;
public:
	// constructor
	Publication(string, string, double, int, int, int);
	Publication();

	void getPublications(Publication, int);
	void storePublication(Publication, int&);
	void setTitle(string);
	void setPublisher(string);
	void setPrice(double);
	void setYear(int);
	string setPublicationType(int);
	void setStock(int);
	string getPublicationType(int);
	string getTitle() {
		return title;
	}
	string getPublisher() {
		return publisher;
	}
	int getYear() {
		return year;
	}
	int getStock() {
		return stock;
	}
	double getPrice() {
		return price;
	}



};

#endif