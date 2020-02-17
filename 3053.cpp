#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    int r;
    cin >> r;

    cout << fixed;
    cout.precision(4);

    cout << M_PI*r*r << '\n' << 2.000000*r*r << endl;
    return 0;
}