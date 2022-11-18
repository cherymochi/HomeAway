#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
using namespace std;
void stafflogin();
void staffdisplaymenu();
void regstudent();
void progadmin();
void staffmenu();
void studentmenu();
void studentlogin();
void genprogreport();
void enroll();

void studentdisplaymenu();

main()
{
    system("cls");
    int choice;
    cout<<"***********************************************************************\n\n\n";
        cout<<"                      Welcome to login Menu Page                               \n\n";
        cout<<"*******************        MENU        *******************************\n\n";
        cout<<"1.STAFF"<<endl;
        cout<<"2.STUDENT"<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"\nEnter your choice :";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
                case 1:
                        staffmenu();
                        break;
                case 2:
                        studentmenu();
                        break;
                case 3:
                        cout<<"Thanks for using this program\n";
                        break;
                default:
                        system("cls");
                        cout<<"You've made a mistake , give it a try again\n"<<endl;
        }
}

void staffmenu()
{
        system("cls");
        int choice;
        cout<<"***********************************************************************\n\n\n";
        cout<<"                      Welcome to Staff Login Page                               \n\n";
        cout<<"*******************        MENU        *******************************\n\n";
        cout<<"1.LOGIN"<<endl;
        cout<<"2.Exit"<<endl;
        cout<<"\nEnter your choice :";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
                case 1:
                        stafflogin();
                        break;
                case 2:
                        cout<<"Thanks for using this program\n";
                        system("pause");
                        main();
                        break;
                default:
                        system("cls");
                        cout<<"You've made a mistake , give it a try again\n"<<endl;
                        staffmenu();
        }
}

void stafflogin()
{
        system("cls");
        int count;
        string AdminUsername,AdminPassword,u,p;
        system("cls");
        cout<<"please enter the following details"<<endl;
        cout<<"USERNAME :";
        cin>>AdminUsername;
        cout<<"PASSWORD :";
        cin>>AdminPassword;

        ifstream input("staffdatabase.txt");
        while(input>>u>>p)
        {
                if(u==AdminUsername && p==AdminPassword)

                {
                        count=1;
                        system("cls");
                }
        }
        input.close();
        if(count==1)
        {
                cout<<"\nHello "<<AdminUsername<<"\nLOGIN SUCESS\nWe're glad that you're here.\nThanks for logging in\n";
                cin.get();
                cin.get();
                staffdisplaymenu();
        }
        else
        {
                cout<<"\nLOGIN ERROR\nPlease check your username and password\n";
                system("pause");
                staffmenu();
        }
        system("pause");
}

void studentmenu()
{
        system("cls");
        int choice;
        cout<<"***********************************************************************\n\n\n";
        cout<<"                      Welcome to Student Login Page                               \n\n";
        cout<<"*******************        MENU        *******************************\n\n";
        cout<<"1.LOGIN"<<endl;
        cout<<"2.Exit"<<endl;
        cout<<"\nEnter your choice :";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
                case 1:
                        studentlogin();
                        break;
                case 2:
                        cout<<"Thanks for using this program\n";
                        system("pause");
                        main();
                        break;
                default:
                        system("cls");
                        cout<<"You've made a mistake , give it a try again\n"<<endl;
                        studentmenu();
        }
}

void studentlogin()
{
        system("cls");
        int count;
        string StudentUsername,StudentPassword,u,p;
        system("cls");
        cout<<"please enter the following details"<<endl;
        cout<<"USERNAME :";
        cin>>StudentUsername;
        cout<<"PASSWORD :";
        cin>>StudentPassword;

        ifstream input("studentdatabase.txt");
        while(input>>u>>p)
        {
                if(u==StudentUsername && p==StudentPassword)

                {
                        count=1;
                        system("cls");
                }
        }
        input.close();
        if(count==1)
        {
                cout<<"\nHello "<<StudentUsername<<"\nLOGIN SUCESS\nWe're glad that you're here.\nThanks for logging in\n";
                cin.get();
                cin.get();
                studentdisplaymenu();
        }
        else
        {
                cout<<"\nLOGIN ERROR\nPlease check your username and password\n";
                studentmenu();
                system("pause");
        }
}

void staffdisplaymenu()
{
system("cls");
string st[20];
int yourchoice;
string confirm;

cout<<"===================================================== \n";
cout<<" \t\tMENU \t \n ";
cout<<"===================================================== \n";
cout<<" 1.Register Student\n";
cout<<" 2.Programme Administration\n";
cout<<" 3.Exit\n";
{ cout<<"Enter your choice(1-3):";
cin>>yourchoice;
switch (yourchoice)
{
    case 1:
           regstudent();
           break;
    case 2:
           progadmin();
           break;
    case 3:
           cout<<"Thanks for using this program\n";
           system("pause");
           main();
           break;
    default:
            cout<<"invalid";
            break;
}
}
}

void studentdisplaymenu()
{
system("cls");
string st[20];
int yourchoice;
string confirm;

cout<<"===================================================== \n";
cout<<" \t\tMENU \t \n ";
cout<<"===================================================== \n";
cout<<" 1.Enroll for Semester\n";
cout<<" 2.Generate Progress Report\n";
cout<<" 3.Exit\n";
{ cout<<"Enter your choice(1-3):";
cin>>yourchoice;
switch (yourchoice)
{
    case 1:
           enroll();
           break;
    case 2:
           genprogreport();
           break;
    case 3:
           cout<<"Thanks for using this program\n";
           system("pause");
           main();
           break;
    default:
            cout<<"invalid";
            break;
}
}
}

void regstudent()
{
     cout<<"Hello";
}
void progadmin()
{
     cout<<"Hello";
}
void genprogreport()
{
     cout<<"Hello";
}
void enroll()
{
     cout<<"Hello";
}
