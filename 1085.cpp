#include <iostream>
using namespace std;

int main(void)
{
    int x, y, w, h, min = -1;
    cin >> x >> y >> w >> h;

    min = x;
    if(y < min) min = y;
    if(w - x < min) min = w - x;
    if(h - y < min) min = h - y;

    cout << min;

    return 0;
}