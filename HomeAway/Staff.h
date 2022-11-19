// Staff Class
// Written by Jamel Campbell (2104604)


#ifndef __STAFF_H__
#define __STAFF_H__

#include "DateEmployed.h"

#include <string>
#include <fstream>
#include <conio.h>
#include <iostream>

using namespace std;


class Staff {
private:
	string staff_id;
	string faculty;
	DateEmployed DE;
	Admin staff_acc;
	string department;
	string staff_last_name;
	string staff_first_name;


public:
	Staff() { // Default Constructor
		staff_id = "NULL";
		faculty = "NULL";
		department = "NULL";
		staff_last_name = "NULL";
		staff_first_name = "NULL";
	}
	Staff(string id, string fName, string lName, string fac, string dep, int d, int m, int y, string password, string username) : staff_acc(password, username), DE(d, m, y) { // Primary Constructor
		staff_id = id;
		faculty = fac;
		department = dep;
		staff_last_name = lName;
		staff_first_name = fName;
	}

	~Staff() { // Destructor
		cout << "Staff Destructor was called." << endl;
	}

	// Mutators
	void setStaffId(string id) {
		staff_id = id;
	}
	void setFaculty(string fac) {
		faculty = fac;
	}
	void setDepartment(string dep) {
		department = dep;
	}
	void setStaffLastName(string lName) {
		staff_last_name = lName;
	}
	void setStaffFirstName(string fName) {
		staff_first_name = fName;
	}

	// Accessors
	string getStaffId() {
		return staff_id;
	}
	string getFaculty() {
		return faculty;
	}
	string getDepartment() {
		return department;
	}
	string getStaffLastName() {
		return staff_last_name;
	}
	string getStaffFirstName() {
		return staff_first_name;
	}

	// Other
	void createStaff() {
		// Creates and adds a staff member to the system

		system("cls");

		cout << "===================================================== \n";
		cout << " \t\t\t\tADD STAFF MEMBER \n ";
		cout << "===================================================== \n\n";

		cout << "Please Enter ID:" << endl;
		cin >> staff_id;
		cout << "Please Enter First Name:" << endl;
		cin >> staff_first_name;
		cout << "Please Enter Last Name:" << endl;
		cin >> staff_last_name;
		cout << "Please Enter Faculty:" << endl;
		cin >> faculty;
		cout << "Please Enter Department" << endl;
		cin >> department;

		ofstream f2("StaffUserAccount.txt", ios::app);
		f2 << staff_id << "\t" << staff_first_name << "\t" << staff_last_name << "\t" << faculty << "\t" << department << endl;
		f2.close();
		system("cls");
		cout << "Staff User Account Successfully Created" << endl;
	}

};

#endif // __STAFF_H__