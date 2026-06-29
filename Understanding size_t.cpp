#include <iostream>

using namespace std;

int main() {
    //size_t = unsigned long long
    int numbers[] = { 10, 20, 30, 40 };
    cout << numeric_limits<long long>::min() << endl;
    cout << numeric_limits<long long>::max() << endl;
    cout << numeric_limits<size_t>::min() << endl;
    cout << numeric_limits<size_t>::max() << endl;


    return 0;
    }