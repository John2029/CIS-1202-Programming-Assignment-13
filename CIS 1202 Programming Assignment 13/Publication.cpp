
//publication.cpp

// John May
// CIS 1202 101
// March 25, 2021

#pragma once
#include "Publication.h"
#include <iostream>

Publication::Publication(string t, string p, double pr, int y, int itemType, int s)
{

	title = t;
	publisher = p;
	price = pr;
	year = y;
	int iType = itemType;
	stock = s;
}


Publication::Publication() {
	title = "Unknown";
	publisher = "Unknown";
	price = 9.99;
	year = 2000;
	stock = 10;

}

void Publication::setTitle(string t)
{
	title = t;
}

void Publication::setPublisher(string p)
{
	publisher = p;
}

void Publication::setPrice(double pr)
{
	price = pr;
}

void Publication::setYear(int y)
{
	year = y;
}

void Publication::setStock(int s)
{
	stock = s;
}

string Publication::setPublicationType(int itemType) {
	
	string itemString = "";
	switch (itemType) {
	case 1:
		itemString = "Book";
		break;
	case 2:
		itemString = "Magazine";
		break;
	case 3:
		itemString = "Newspaper";
		break;
	case 4:
		itemString = "Audio";
		break;
	case 5:
		itemString = "Video";
		break;
	}
		return itemString;
}

string Publication::getPublicationType(int itemType) {
	string itemString = "";
		switch (itemType) {
		case 1:
			itemString = "Book";
			break;
		case 2:
			itemString = "Magazine";
			break;
		case 3:
			itemString = "Newspaper";
			break;
		case 4:
			itemString = "Audio";
			break;
		case 5:
			itemString = "Video";
			break;
		}
	return itemString;
}
