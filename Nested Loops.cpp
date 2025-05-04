#include <iostream>

using namespace std;

int main() {
  cout << "Rows: ";
    int rows;
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        // i = 1, j = 0 (1)
        // i = 2, j = 0, 1 (2)
        for (int j = 0; j < i; j++) {
            cout << "*";

        }
        cout << endl;
    }

    return 0;
}
