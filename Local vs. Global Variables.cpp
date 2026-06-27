#include <iostream>

using namespace std;

// Global Variable (Global scope)
const double taxRate = .2;

double calculateTax(int sales) {
    return sales * taxRate;
}

int main() {
    // Local Variable (Local scope)
    int sales = 10'000;
    double tax =calculateTax(sales);
    cout <<tax;

}