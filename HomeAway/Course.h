// Course Class
// Written by Nathalea Evans (2101707)


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
	void addCourse() {
		// Creates a new course to be added to the system

		system("cls");

		cout << "===================================================== \n";
		cout << " \t\t\t\tADD A COURSE \n ";
		cout << "===================================================== \n\n";

		cout << "Please Course Code: ";
		cin >> c_code;
		cout << "Please Course Name: ";
		cin >> c_name;
		cout << "Please Enter Couse Credits: ";
		cin >> credits;
		cout << "Please Enter Course Description:";
		cin >> description;
		cout << "Please Enter Course Prerequisites: ";
		cin >> prerequisites;


		ofstream f1("Courses.txt", ios::app);
		f1 << c_code << c_name << "\t" << credits << "\t" << description << "\t" << prerequisites << "\t" << endl;
		f1.close();
		system("cls");
		cout << "Course Successfully Added" << endl;
	}

	void generateFeeBreakdown(){
		// Calculates the fee for each course using the credits.

		float cost = 10000.00;

	}
};

#endif // __COURSE_H__