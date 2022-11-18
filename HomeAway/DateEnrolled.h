// Date Enrolled Class

#ifndef __DATEENROLLED_H__
#define __DATEENROLLED_H__

#include <iostream>

using namespace std;


class DateEnrolled {
protected:
	int stud_day;
	int stud_month;
	int stud_year;

public:
	DateEnrolled() { // Default Constructor
		stud_day = 11;
		stud_month = 18;
		stud_year = 2022;
	}
	DateEnrolled(int d, int m, int y) { // Primary Constructor
		stud_day = d;
		stud_month = m;
		stud_year = y;
	}
	void displayEnrolDate() {
		cout << stud_day << "/" << stud_month << "/" << stud_year << endl;
	}
};

#endif // __DATEENROLLED_H__