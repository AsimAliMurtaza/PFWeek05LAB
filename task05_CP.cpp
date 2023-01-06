#include <iostream>
using namespace std;

int time(int, int);
main()
{
    int minutes;
    int hours;

    cout << "Enter hours in 24-Hours format (0 to 23): ";
    cin >> hours;

    cout << "Enter minutes (0 to 59): ";
    cin >> minutes;

    time(hours, minutes);
}

int time(int hours, int minutes)
{
    int mins;
    int hourss;
    int finalMins;

    mins = minutes + 15;

    if (mins >= 60)
    {
        if(hours<24){hourss = hours + 1;}
        if(hourss == 24){hourss = 0;}
        finalMins = mins % 60;
        cout << "Time is " << hourss << ":" << finalMins << endl;
    }
    
    if(mins < 60)
    {
        cout << "Time is "<< hours << ":" << mins << endl;
    }

}