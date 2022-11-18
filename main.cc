#include <iostream>
#include "calendar.h"

using namespace std;

int main()
{
    int choice;

    do{
        cout << "********** Calendar **********" << endl;
        cout << "Choose from the Menu" << endl;
        cout << "1. Show Calendar" << endl;
        cout << "2. Exit" << endl;
        int choice;
        cin >> choice;
        if (choice == 1){
        int month, year;
        cout << "Enter the month: ";
        cin >> month;
        cout << "Enter the year: ";
        cin >> year;
        Calendar cal(month, year);
         if (cal.getLeapYear())
       { cout << cal.getYear() <<" was a Leap Year" << endl;}
    else
        {cout << cal.getYear()<<" was Not Leap Year" << endl;}
        cal.printCalendar();
        }
        else if (choice == 2)
    {
        cout << "Thank you for using the Calendar" << endl;
    }
    else
    {
        cout << "Invalid Choice" << endl;
    }
        
    }
    while(choice != 2);
      
    
    return 0;
        
}