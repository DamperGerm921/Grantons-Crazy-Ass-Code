#include <iostream>

using namespace std;
int main() {
cout << sizeof(int) << endl;
    cout << numeric_limits<int>::min() << endl
    << numeric_limits<int>::max() << endl;

    int number = numeric_limits<int>::max();
    number--;
    cout << number;

    return 0;
}
