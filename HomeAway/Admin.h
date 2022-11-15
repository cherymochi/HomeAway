// Administrator Class

#ifndef __ADMIN_H__
#define __ADMIN_H__

#include <iostream>

using namespace std;


class Admin {
protected:
	string admin_user;
	string admin_pass;

public:
	Admin(string user, string pass) { // Primary Constructor
		adminUser = user;
		adminPass = pass;
	}

	~Admin() { // Destructor
		cout << "Admin Destructor was called." << endl;
	}

};

#endif // __ADMIN_H__