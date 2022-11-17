// Course Class

#ifndef __COURSE_H__
#define __COURSE_H__

#include <string>
#include <fstream>
#include <conio.h>
#include <iostream>

using namespace std;


class Course {
private:
	string c_code;
	string c_name;
	string credits;
	string description;
	string prerequisites;

public:
	Course() { // Default Constructor
		c_code = "NULL";
		c_name = "NULL";
		credits = "NULL";
		description = "NULL";
		prerequisites = "NULL";
	}
	Course(string code, string name, string cred, string desc, string prereq) {
		c_code = code;
		c_name = name;
		credits = cred;
		description = desc;
		prerequisites = prereq;
	}
	~Course() {
		cout << "Course Destructor was called." << endl;
	}

	// Mutators
	void setCode(string code) {
		c_code = code;
	}
	void setCName(string name) {
		c_name = name;
	}
	void setCredits(string cred) {
		credits = cred;
	}
	void setDescription(string desc) {
		description = desc;
	}
	void setPrerequisites(string prereq) {
		prerequisites = prereq;
	}

	// Accessors
	string setCode() {
		return c_code;
	}
	string setCName() {
		return c_name;
	}
	string setCredits() {
		return credits;
	}
	string setDescription() {
		return description;
	}
	string setPrerequisites() {
		return prerequisites;
	}

	// Other
	void addCourse(string code, string name, string cred, string desc, string prereq) {
		// Creates a new course to be added to the system
	}
};

#endif // __COURSE_H__