// Student Class
// Written by Jamel Campbell (2104604)


#ifndef __STUDENT_H__
#define __STUDENT_H__

#include "DateEnrolled.h"

#include <string>
#include <fstream>
#include <conio.h>
#include <iostream>

using namespace std;

class Student {
private:
	string status;
	string stud_id;
	string address;
	string pro_code;
	DateEnrolled de;
	string contact_num;
	string stud_last_name;
	string stud_first_name;

public:
	Student() { // Default Constructor
		status = "NULL";
		stud_id = "NULL";
		address = "NULL";
		pro_code = "NULL";
		contact_num = "NULL";
		stud_last_name = "NULL";
		stud_first_name = "NULL";
	}
	Student(string id, string stat, string add, string code, string phone, string fName, string lName, int d, int m, int y): de(d, m, y) { // Primary Constructor
		stud_id = id;
		status = stat;
		address = add;
		pro_code = code;
		contact_num = phone;
		stud_last_name = lName;
		stud_first_name = fName;
	}
	~Student() { // Destructor
		cout << "Student Destructor was called." << endl;
	}
	
	// Mutators
	void setStudId(string id) {
		stud_id = id;
	}
	void setStatus(string stat) {
		status = stat;
	}
	void setAddress(string add) {
		address = add;
	}
	void setProCode(string code) {
		pro_code = code;
	}
	void setContactNum(string phone) {
		contact_num = phone;
	}
	void setStudLastName(string lName) {
		stud_last_name = lName;
	}
	void setStudFirstName(string fName) {
		stud_first_name = fName;
	}

	// Accessors
	string getStudId() {
		return stud_id;
	}
	string getStatus() {
		return status;
	}
	string getAddress() {
		return address;
	}
	string getProCode() {
		return pro_code;
	}
	string getContactNum() {
		return contact_num;
	}
	string getStudLastName() {
		return stud_last_name;
	}
	string getStudFirstName() {
		return stud_first_name;
	}

	// Other Methods
	void registerStudent() {
		// Creates a student to be added to the system.

		system("cls");

		cout << "===================================================== \n";
		cout << " \t\t\t\tREGISTER STUDENT \n ";
		cout << "===================================================== \n\n";

		cout << "Please Enter First Name: ";
		cin >> stud_first_name;
		cout << "Please Enter Last Name: ";
		cin >> stud_last_name;
		cout << "Please Enter Your Address: ";
		cin >> address;
		cout << "Please Enter Your Program Code:";
		cin >> pro_code;
		cout << "Please Enter Contact Number: ";
		cin >> contact_num;


		ofstream f1("RegisteredStudent.txt", ios::app);
		f1 << stud_first_name << stud_last_name << "\t" << address << "\t" << pro_code << "\t" << contact_num << "\t" << endl;
		f1.close();
		system("cls");
		cout << "Student Account Successfully Created" << endl;
	}
	void enroll() {
		// Allows student to select courses to enroll in
	}
};

#endif // __STUDENT_H__