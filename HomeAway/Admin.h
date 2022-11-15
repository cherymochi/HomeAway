// Administrator Class

#ifndef __ADMIN_H__
#define __ADMIN_H__

#include <iostream>

using namespace std;


class Admin {
private:
	string adminUser;
	string adminPass;

public:
	Admin(string user, string pass) { // Primary Constructor
		adminUser = user;
		adminPass = pass;
	}

	~Admin() { // Destructor
		cout << "Admin Destructor was called." << endl;
	}

	// Mutators
	void setAdminUser(string user) {
		adminUser = user;
	}
	void setAdminPass(string pass) {
		adminPass = pass;
	}

	// Accessors
	string getAdminUser() {
		return adminUser;
	}
	string getAdminPass() {
		return adminPass;
	}
};

#endif // __ADMIN_H__