// Programme Class

#ifndef __PROGRAMME_H__
#define __PROGRAMME_H__

#include <iostream>

using namespace std;


class Programme {
private:
	string award;
	string p_code;
	string p_name;
	string max_course;
	string accreditation;
	
public:
	Programme(string awa, string code, string name, string courses, string credit) { // Primary Construct
		award = awa;
		p_code = code;
		p_name = name;
		max_course = courses;
		accreditation = credit;
	}
	~Programme() { // Destructor
		cout << "Programme Destructor was called." << endl;
	}

	// Mutators
	void setAward(string awa) {
		award = awa;
	}
	void setPCode(string code) {
		p_code = code;
	}
	void setPName(string name) {
		p_name = name;
	}
	void setMaxCourse(string courses) {
		max_course = courses;
	}
	void setAccreditation(string credit) {
		accreditation = credit;
	}
	
	// Accessors
	string getAward() {
		return award;
	}
	string getPCode() {
		return p_code;
	}
	string getPName() {
		return p_name;
	}
	string getMaxCourse() {
		return max_course;
	}
	string getAccreditation() {
		return accreditation;
	}

	// Other
	void createProgramme(string awa, string code, string name, string courses, string credit) {
		// Creates a new programme to be added to the system
	}
	void modifyProgramme(string awa, string code, string name, string courses, string credit) {
		// Modifies an existing programme in the system
	}
};

#endif // __PROGRAMME_H__