#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //"setw" will format the characters. We're going to make a chart.
    cout << left;
    cout << setw(10) << "Spring" << setw(10) << "Nice" << endl
         << setw (10) << "Summer" << setw(10) << "Hot" << endl;

    //setprecision will help us determine how many decimals we want displayed.
    //It'll also round for us.
    cout << fixed << setprecision(2) << 12.34567 << endl
    << 22.123456 << endl;

    cout << left;
    cout << setw(15) << "Course" << setw(10) << "Students" << endl
         << setw(15) << "C++" << setw(10) << right << "100" << left << endl
         << setw(15) << "Java" << setw(10) << right << "50" << endl;

    return 0;
}




