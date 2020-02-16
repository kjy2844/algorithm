#include <iostream>
using namespace std;

int main(void)
{
    int a, b, ra, rb;
    cin >> a >> b;

    ra = a / 100 + a % 10 * 100 + a % 100 / 10 * 10;
    rb = b / 100 + b % 10 * 100 + b % 100 / 10 * 10;

    if(ra > rb) cout << ra;
    else cout << rb;

    return 0;
}