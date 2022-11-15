// Student Class

#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <iostream>

using namespace std;

class Student {
private:
	string stud_id;
	string status;
	string address;
	string pro_code;
	string contact_num;
	string stud_last_name;
	string stud_first_name;

public:
	Student(string id, string stat, string add, string code, string phone, string fName, string lName) { // Primary Constructor
		stud_id = id;
		status = stat;
		address = add;
		pro_code = code;
		contact_num = phone;
		stud_last_name = lName;
		stud_first_name = fName;
	}
	~Student() {
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

	// Other
	void registerStudent(string id, string stat, string add, string code, string phone, string fName, string lName) {
		// Creates a student to be added to the system.
	}
};

#endif // __STUDENT_H__