#include <iostream>

using namespace std;

void greet (string name) {
    cout << "Hello" << name;
}

// Signature = name + (number and type of parameters)
void greet(string title, string name) {
    cout << "Hello" << title << " " << name;
}


int main() {

    greet("Mr.", "Austin");


    return 0;
}