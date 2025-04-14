#include <iostream>

using namespace std;

int main() {
    cout << "Enter two values: ";
    int first;
    int second;
    cin >> first >> second;

    int result = (first > second) ? first : second;
    if (first > second)
        result = first;
    else
        result = second;

    cout << result << endl;


    return 0;
}
