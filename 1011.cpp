#include <iostream>
using namespace std;

int find_min(int dist)
{
    int i = 1;
    while(dist >= i*i) {
        i++;
        if(i == 46341) break;
    }
    i--;

    if ((dist - i * i) % i)
        return (2 * i) + (dist - i * i) / i;
    else
        return (2 * i - 1) + (dist - i * i) / i;
}

int main(void)
{
    int t, x, y;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> x >> y;
        cout << find_min(y-x) << endl;
    }


    return 0;
}