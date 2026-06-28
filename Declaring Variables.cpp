#include <iostream>

using namespace std;

// Function declaration (function prototype)
void greet(string name);

int main() {
   greet("Granton");
   return 0;

}

// Function Declaration
void greet(string name) {
   cout << "Hello, " << name << "!" << endl;
}