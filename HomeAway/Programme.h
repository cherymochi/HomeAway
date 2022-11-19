// Programme Class
// Written by Mikhael McDowell (2111649)


#ifndef __PROGRAMME_H__
#define __PROGRAMME_H__

#include <string>
#include <fstream>
#include <conio.h>
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
	Programme(){ // Default Constructor
		award = "NULL";
		p_code = "NULL";
		p_name = "NULL";
		max_course = "NULL";
		accreditation = "NULL";
	}
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
	void createProgramme() {
		// Creates a new programme to be added to the system

		system("cls");

		cout << "===================================================== \n";
		cout << " \t\t\t\tCREATE PROGRAMME \n ";
		cout << "===================================================== \n\n";

		cout << "\t\t\tWrite Programme Name: ";
		cin >> p_name;
		cout << "\t\t\tWrite Programme Code: ";
		cin >> p_code;
		cout << "\t\t\tWrite Maximum Number of Courses: ";
		cin >> max_course;
		cout << "\t\t\tWrite Award: ";
		cin >> award;
		cout << "\t\t\tWrite Acreditation: ";
		cin >> accreditation;

		ofstream f1("Programmes.txt", ios::app);
		f1 << p_name << p_code << "\t" << max_course << "\t" << award << "\t" << accreditation << "\t" << endl;
		f1.close();
		system("cls");
		cout << "Programme Successfully Created" << endl;
	}
	void displayProgramme() {
		// Displays information entered for Programme

		Programme programme;
		ifstream Infile;
		Infile.open("Programme.txt", ios::binary);
		if (!Infile)
		{
			cout << "File Could Not Be Created." << endl;
		}
		cout << "\t\t\t\tProgrames That University Provide" << endl;
		cout << "\t\t**************************************************************" << endl;
		while (!Infile.eof())
		{
			if (Infile.read(reinterpret_cast<char*>(&programme), sizeof(Programme)))
			{
				cout << "\t\t\tPrograme Name: " << p_name << endl;
				cout << "\t\t\tPrograme Code: " << p_code << endl;
				cout << "\t\t\tMaximum Number of Coarses: " << max_course << endl;
				cout << "\t\t\tAward: " << award << endl;
				cout << "\t\t\tAcreditation: " << accreditation << endl;
			}
		}
		Infile.close();
	}

	void modifyProgramme() {
		// Modifies an existing programme in the system

		
	}
};

#endif // __PROGRAMME_H__