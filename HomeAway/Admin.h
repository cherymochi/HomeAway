// Administrator Class

#ifndef __ADMIN_H__
#define __ADMIN_H__

#include <string>
#include <fstream>
#include <conio.h>
#include <iostream>

using namespace std;


class Admin {
protected:
	string admin_user;
	string admin_pass;

public:
	Admin() { // Default Constructor
		admin_user = "NULL";
		admin_pass = "NULL";
	}

	Admin(string user, string pass) { // Primary Constructor
		admin_user = user;
		admin_pass = pass;
	}

	~Admin() { // Destructor
		cout << "Admin Destructor was called." << endl;
	}

	// Other
	bool loginAdmin() {
		cout << "Enter Admin Username: " << endl;
		cin >> admin_user;
		cout << "Enter Admin Password: " << endl;
		cin >> admin_pass;

		bool bol = false;
		if (admin_user == "Tiersupport" && admin_pass == "Login123") {
			// Checks if the correct username and password were entered

			cout << "Login Successful" << endl;
			bol = true;
			return true;
		}
		else {
			cout << "Incorrect Login \nTry Again" << endl;
			bol = false;
			return false;
		}
	}

};

#endif // __ADMIN_H__