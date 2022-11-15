// Staff Class

#ifndef __STAFF_H__
#define __STAFF_H__

#include "DateEmployed.h"

#include <iostream>

using namespace std;


class Staff {
private:
	string staff_id;
	string faculty;
	DateEmployed DE;
	string department;
	string staff_last_name;
	string staff_first_name;

	
public:
	Staff(string id, string fName, string lName, string fac, string dep, int d, int m, int y): DE(d, m, y) { // Primary Constructor
		staff_id= id;
		faculty = fac;
		department = dep;
		staff_last_name= lName;
		staff_first_name= fName;
	}

	~Staff() { // Destructor
		cout << "Staff Destructor was called." << endl;
	}

	// Mutators
	void setStaffId(string id) {
		staff_id= id;
	}
	void setFaculty(string fac) {
		faculty = fac;
	}
	void setDepartment(string dep) {
		department = dep;
	}
	void setStaffLastName(string lName) {
		staff_last_name= lName;
	}
	void setStaffFirstName(string fName) {
		staff_first_name= fName;
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
	void createStaff(string id, string fac, string dep, string lName, string fName) { 
		// Creates and adds a staff member to the system

	}
};

#endif // __STAFF_H__