// Date Employed Class

#ifndef __DATEEMPLOYED_H__
#define __DATEEMPLOYED_H__

#include <iostream>

using namespace std;


class DateEmployed {
private:
	int staffDay;
	int staffMonth;
	int staffYear;

public:
	DateEmployed(int d, int m, int y) { // Primary Constructor
		staffDay = d;
		staffMonth = m;
		staffYear = y;
	}
	void displayEmployDate() {
		cout << staffDay << "/" << staffMonth << "/" << staffYear << endl;
	}
};

#endif // __DATEEMPLOYED_H__