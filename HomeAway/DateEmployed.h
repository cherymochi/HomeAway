// Date Employed Class
// Written by Nathalea Evans (2101707)

#ifndef __DATEEMPLOYED_H__
#define __DATEEMPLOYED_H__


#include <iostream>

using namespace std;


class DateEmployed {
protected:
	int staff_day;
	int staff_month;
	int staff_year;

public:
	DateEmployed() { // Default Constructor
		staff_day = 11;
		staff_month = 18;
		staff_year = 2022;
	}
	DateEmployed(int d, int m, int y) { // Primary Constructor
		staff_day = d;
		staff_month = m;
		staff_year = y;
	}
	void displayEmployDate() {
		cout << staff_day << "/" << staff_month << "/" << staff_year << endl;
	}
};

#endif // __DATEEMPLOYED_H__