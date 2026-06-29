#include <iostream>

using namespace std;

int main() {
    int numbers[] = { 10, 20 };
    for (auto number: numbers)
        cout << number << endl;

    cout << numbers[30];

    return 0;
}