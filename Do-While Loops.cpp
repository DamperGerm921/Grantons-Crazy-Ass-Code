#include <iostream>

using namespace std;

int main() {
    int secret = 69;
    int guess = 0;
    while (guess != secret) {
        cout << "Guess: ";
        cin >> guess;
    }

    return 0;
}
