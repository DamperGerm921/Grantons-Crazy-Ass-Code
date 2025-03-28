#include <iostream>

using namespace std;

int main() {

    //"+" tells compiler to treat character as a number
    //Strings are sequences of characters

    char ch = 'a';
    cout << +ch << endl;
    string name;
    cout << "enter your name: ";
    getline(cin, name);
    cout << "Hi " << name << endl;

    string street;
    cout << "Street: ";
    getline (cin, street);

    string city;
    cout << "City: ";
    getline (cin, city);

    string state;
    cout << "State: ";
    getline (cin, state);

    string zipCode;
    cout << "Zip Code: ";
    getline (cin, zipCode);

    cout <<"You live at:" << endl
    << street << endl
    << city << ", " << state << ", " << zipCode << endl;
     cout << "I know where you live!!!";
    return 0;
}
