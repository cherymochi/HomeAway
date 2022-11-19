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
#include "Student.h"
#include "DateEmployed.h"
#include "DateEnrolled.h"
#include "Programme.h"
#include "Staff.h"

#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>

using std::cout;
using std:: cin;

// Methods
void adminMenu();
void adminDisplayMenu();
void staffMenu();
void staffLogin();
void staffDisplayMenu();
void studentMenu();
void studentLogin();
void studentDisplayMenu();

// Global Variables
Admin admin;
Staff staff;
Student stud;
Programme pro;
Course course;

int count;

int main() { // Begins program execution

    int choice;
    
    while (1) {
        // While Loop to keep menu looping
        cout << "***********************************************************************\n\n";
        cout << "                      Welcome to Home Away Main Menu Page                               \n\n";
        cout << "**************************        MENU        *************************\n\n";
        cout << "1.ADMIN" << endl;
        cout << "2.STAFF" << endl;
        cout << "3.STUDENT\n" << endl;
        cout << "Press '0' to exit" << endl;
        cout << "\nEnter your choice :";
        cin >> choice;
        cout << endl;

        switch (choice) {

        case 1:
            
            break;

        case 2:
            staffMenu();
            break;
        
        case 3:
            studentMenu();
            break;

        case 0:
            cout << "Thanks for using this program\n";
            exit(0);

        default:
            system("cls");
            cout << "Error:\nIncorrect Option Entered.\nPlease Try Again\n" << endl;
            system("pause");
            system("cls");
            continue;
        }
    } 
}

// Method Definitions
// Written by Markayla Lawrence (2101566) 


void adminMenu() {

    system("cls");

    int choice;

    cout << "***********************************************************************\n\n\n";
    cout << "                      Welcome to Admin Login Page                               \n\n";
    cout << "**************************        MENU        *************************\n\n";
    cout << "1.LOGIN" << endl;
    cout << "2.Exit" << endl;
    cout << "\nEnter your choice :";
    cin >> choice;
    cout << endl;

    switch (choice) {

    case 1:
        admin.loginAdmin();

        if (admin.loginAdmin() == true) {
            adminDisplayMenu();
        }
        else {
            cout << "\nLOGIN ERROR\nPlease check your username and password\n";
            system("pause");
            adminMenu();
        }
        break;

    case 2:
        system("pause");
        system("cls");
        main();
        break;

    default:
        system("cls");
        cout << "You've made a mistake , give it a try again\n" << endl;
        system("pause");
        adminMenu();
    }
}
void adminDisplayMenu() {

    system("cls");

    int yourchoice;

    cout << "===================================================== \n";
    cout << " \t\t\t\tMENU \n ";
    cout << "===================================================== \n\n";
    cout << " 1.Add Staff Member\n";
    cout << " 2.Exit\n\n";
    cout << "Enter your choice: ";
    cin >> yourchoice;

    switch (yourchoice) {

    case 1:
        staff.createStaff();
        break;

    case 2:
        system("pause");
        system("cls");
        main();
        break;

    default:
        cout << "Invalid Input";
        break;
    }
}

void staffMenu() {

    system("cls");

    int choice;

    cout << "***********************************************************************\n\n\n";
    cout << "                         Staff Login Page                               \n\n";
    cout << "Select One \n\n";
    cout << "1.LOGIN" << endl;
    cout << "2.Exit" << endl;
    cout << "\nEnter your choice :";
    cin >> choice;
    cout << endl;

    switch (choice) {

    case 1:
        staffLogin();
        break;

    case 2:
        system("pause");
        system("cls");
        main();
        break;

    default:
        system("cls");
        cout << "You've made a mistake , give it a try again\n" << endl;
        system("pause");
        system("cls");
        staffMenu();
    }
}

void staffLogin() {
    //  Verifies the username and password entered for staff members

    string staff_user = "StaffMem";
    string staff_pass = "Pass123";
    string sf_user, sf_pass;
    int count = 0;

    system("cls");

    cout << "\nPlease enter the following details.\n" << endl;
    cout << "USERNAME: ";
    cin >> sf_user;
    cout << "PASSWORD: ";
    cin >> sf_pass;

   
    if (sf_user == staff_user && sf_pass == staff_pass) {
        count = 1;
        system("cls");
    }

    if (count == 1) {
        cout << "\nHello " << sf_user << "\n\nLOGIN SUCESS\nWe're glad that you're here.\nThanks for logging in\n";
        cin.get();
        cin.get();
        staffDisplayMenu();
    }
    else {
        cout << "\nLOGIN ERROR\nPlease check your username and password\n";
        system("pause");
        system("cls");
        staffMenu();
    }
}

void staffDisplayMenu() {

    system("cls");
    string st[20];
    int yourchoice;
    string confirm;

    cout << "===================================================== \n";
    cout << " \t\t\t\tMENU \n ";
    cout << "===================================================== \n";
    cout << " 1.Register Student\n";
    cout << " 2.Programme Administration\n";
    cout << " 3.Exit\n";
    cout << "Enter your choice: ";
    cin >> yourchoice;

    switch (yourchoice) {

    case 1:
        stud.registerStudent();
        break;

    case 2:
        pro.createProgramme();
        break;

    case 3:
        system("pause");
        system("cls");
        main();
        break;

    default:
        cout << "Invalid Input! Please Try again\n";
        system("pause");
        staffDisplayMenu();
        break;
    }
}

void studentMenu(){

    system("cls");

    int choice;

    cout << "***********************************************************************\n\n\n";
    cout << "                      Welcome to Student Login Page                               \n\n";
    cout << "**************************        MENU        *************************\n\n";
    cout << "1.LOGIN" << endl;
    cout << "2.Exit" << endl;
    cout << "\nEnter your choice :";
    cin >> choice;
    cout << endl;

    switch(choice){

    case 1:
        studentLogin();
        break;

    case 2:
        system("pause");
        system("cls");
        main();
        break;

    default:
        system("cls");
        cout << "You've made a mistake , give it a try again\n" << endl;
        system("pause");
        studentMenu();
    }
}

void studentLogin(){

    system("cls");

    
    string std_user = "Stud123";
    string std_pass = "PassWord123";
    string s_user, s_pass;
    int count = 0;

    cout << "Please enter the following details.\n" << endl;
    cout << "USERNAME :";
    cin >> s_user;
    cout << "PASSWORD :";
    cin >> s_pass;

   
    if(s_user == std_user && s_pass == std_pass) {
        count = 1;
        system("cls");
    }
    
    if(count == 1) {

        cout << "\nHello " << s_user << "\nLOGIN SUCESS\nWe're glad that you're here.\nThanks for logging in\n";
        cin.get();
        cin.get();
        studentDisplayMenu();
    }
    else{
        cout << "\nLOGIN ERROR\nPlease check your username and password\n";
        system("pause");
        studentMenu();
    }
}

void studentDisplayMenu() {

    system("cls");

    string st[20];
    int yourchoice;
    string confirm;

    cout << "===================================================== \n";
    cout << " \t\t\t\tMENU \n ";
    cout << "===================================================== \n";
    cout << " 1.Enroll for Semester\n";
    cout << " 2.Generate Progress Report\n";
    cout << " 3.Exit\n";
    cout << "Enter choice: ";
    cin >> yourchoice;

    switch (yourchoice){

    case 1:
        stud.enroll();
        break;

    case 2:
        
        break;

    case 3:
        system("pause");
        system("cls");
        main();
        break;

    default:
        cout << "Invalid value entered! Please Try Again\n";
        system("pause");
        system("cls");
        studentDisplayMenu();
        break;
    }
}

