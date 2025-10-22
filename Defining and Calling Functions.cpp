#include <iostream>

using namespace std;

void greet (string name) {
    cout << "Hello " << name << endl;
}

string fullName(string firstName, string lastName) {
// Concatenating (combining)
    return firstName + " " + lastName;
}

int main() {
    //calling - invoking - executing
    string name = fullName("Granton", "Austin");
    greet(name);

    cout << "Done";

return 0;
}