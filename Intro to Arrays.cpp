#include <iostream>

using namespace std;

int main()
{
    int numbers[] { 10, 20};
    cout << numbers[2] << endl;

    string names[3];

    cout << "Name: ";
    getline(cin, names[0]);

    cout << "Name: ";
    getline(cin, names[1]);

    cout << "Name: ";
    getline(cin, names[2]);

    cout << names[0];

    return 0;
}
