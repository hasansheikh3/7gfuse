#ifndef CALENDAR_H
#define CALENDAR_H

// class Declaration
class Calendar
{
    private:
        int month;
        int year;
public:

    // Constructor
    Calendar(int month, int year)
    {
        this->month = month;
        this->year = year;
    }

    // Getters
    int getMonth()
    {
        return month;
    }
    int getYear()
    {
        return year;
    }

    // Main Functions
    void printCalendar();
    bool getLeapYear();
    int daysOfMonth();
    int dayOfWeek();
};


// Enum for the months
enum Month {January, February, March, April, May, June, July, August, September, October, November, December};

// Enum for the days of the week
enum Weekday {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

#endif

