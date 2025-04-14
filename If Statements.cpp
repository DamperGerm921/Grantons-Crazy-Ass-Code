#include <iostream>

using namespace std;

int main()
{
  int sales = 10'000;
    double commission;
  if (sales < 10'000) commission = .1;
 else if (sales >= 10'000 && sales <= 15'000) commission = .15;
    else commission = .2;
    cout << commission << endl;

    return 0;
}
