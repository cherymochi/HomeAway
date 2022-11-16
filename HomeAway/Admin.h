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
		admin_user = user;
		admin_pass = pass;
	}

	~Admin() { // Destructor
		cout << "Admin Destructor was called." << endl;
	}

};

#endif // __ADMIN_H__