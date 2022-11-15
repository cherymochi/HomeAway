// Staff Class

#ifndef __STAFF_H__
#define __STAFF_H__

#include "DateEmployed.h"

#include <iostream>

using namespace std;


class Staff {
private:
	string staffId;
	string faculty;
	DateEmployed DE;
	string department;
	string staffLastName;
	string staffFirstName;

	
public:
	Staff(string id, string fName, string lName, string fac, string dep, int d, int m, int y): DE(d, m, y) { // Primary Constructor
		staffId = id;
		faculty = fac;
		department = dep;
		staffLastName = lName;
		staffFirstName = fName;
	}

	~Staff() { // Destructor
		cout << "Staff Destructor was called." << endl;
	}

	// Mutators
	void setStaffId(string id) {
		staffId = id;
	}
	void setFaculty(string fac) {
		faculty = fac;
	}
	void setDepartment(string dep) {
		department = dep;
	}
	void setStaffLastName(string lName) {
		staffLastName = lName;
	}
	void setStaffFirstName(string fName) {
		staffFirstName = fName;
	}

	// Accessors
	string getStaffId() {
		return staffId;
	}
	string getFaculty() {
		return faculty;
	}
	string getDepartment() {
		return department;
	}
	string getStaffLastName() {
		return staffLastName;
	}
	string getStaffFirstName() {
		return staffFirstName;
	}

	// Other
	void createStaff(string id, string fac, string dep, string lName, string fName) { 
		// Creates and adds a staff member to the system

	}
};

#endif // __STAFF_H__