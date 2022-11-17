// Group : MM&NJ
//        Nathalea Evans    - 2101707
//        Markayla Lawrence - 2101566
//        Mikhail McDowell  - 2111649
//        Jamel Campbell    - 2104604

// Project : Home & Away Institute
// Start Date : October 4, 2022
// End Date : November 18, 2022

// Header Files
#include "Admin.h"
#include "Course.h"
#include "DateEmployed.h"
#include "DateEnrolled.h"
#include "Programme.h"
#include "Staff.h"
#include "Student.h"

#include <string>
#include <fstream>
#include <conio.h>
#include <iostream>

using namespace std;

int main() {


	Admin admin;
	Staff staff;
	Programme programme;

	int choice = 1;

	while (choice != 0)
	{
		system("cls");
		cout << "\t\t\t\t----->\tWelcome To Home & Away Institute System\t<-----" << endl;
		cout << "\t\t-----------------------------------------------------------------" << endl;
		cout << "\t\t|\t1: Login As ADMIN\t\t\t\t\t|" << endl;
		cout << "\t\t|\t2: Login As a Student\t\t\t\t\t|" << endl;
		cout << "\t\t|\t3: Login As a Faculty\t\t\t\t\t|" << endl;
		cout << "\t\t|\t0: Exit\t\t\t\t\t\t\t|" << endl;
		cout << "\t\t-----------------------------------------------------------------" << endl;
		cout << "\t\t\tEnter Your Choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			bool bol = admin.loginAdmin();
			if (bol == true)
			{
				int choices = 1;
				while (choices != 0)
				{
					system("cls");
					cout << "\t\t\t\t----->\tWelcome To Admin Page\t<-----" << endl;
					cout << "\t\t-----------------------------------------------------------------" << endl;
					cout << "\t\t|\t1: Create Staff Users\t\t\t\t|" << endl;
					cout << "\t\t|\t0: Exit\t\t\t\t\t\t\t|" << endl;
					cout << "\t\t-----------------------------------------------------------------" << endl;
					cout << "\t\t\tEnter Your Choice: ";
					cin >> choices;
					switch (choices)
					{
					case 1:
					{
						system("cls");
						staff.createStaff();

					}break;
					case 0:
					{
						cout << "Good bye" << (char)2 << endl;
						break;
					}break;
					}
				}
			}
			//login call function as Admin
		}
		case 2:
		{
			//login call function as Student
		}break;
		case 3:
		{
			bool bol = staff.loginStaff();
			if (bol == true)
			{
				int choices = 1;
				while (choices != 0)
				{
					system("cls");
					cout << "\t\t\t\t----->\tWelcome To Staff Page\t<-----" << endl;
					cout << "\t\t-----------------------------------------------------------------" << endl;
					cout << "\t\t|\t1: Register Student\t\t\t\t|" << endl;
					cout << "\t\t|\t2: Create Programme\t\t\t\t|" << endl;
					cout << "\t\t|\t3: Delete Programme\t\t\t\t|" << endl;
					cout << "\t\t|\t4: Edit Programme\t\t\t\t|" << endl;
					cout << "\t\t|\t5: Generate Student List\t\t\t\t|" << endl;
					cout << "\t\t|\t0: Exit\t\t\t\t\t\t\t|" << endl;
					cout << "\t\t-----------------------------------------------------------------" << endl;
					cout << "\t\t\tEnter Your Choice: ";
					cin >> choices;
					switch (choices)
					{
					case 1:
					{
						system("cls");

					}break;
					case 2:
					{
						system("cls");
						programme.createProgramme();

					}break;
					case 3:
					{
						system("cls");
						programme.deleteProgramme();

					}break;
					case 4:
					{
						system("cls");
						programme.modifyProgramme();
					}break;
					case 5:
					{
						system("cls");
						programme.displayProgramme();
					}
					case 0:
					{
						cout << "Good bye" << (char)2 << endl;
						break;
					}break;
					}
				}
			}

		}break;
		case 0:
		{
			cout << "Good bye" << (char)2 << endl;
			choice = 0;
		}break;
		default:
		{
			cout << "Invalid Input " << endl;
		} break;
		}
	}
   
    return 0;
}