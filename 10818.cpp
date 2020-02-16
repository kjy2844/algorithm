#include <iostream>
using namespace std;

int main(void)
{
    int a;
    int min = 1000001, max = -1000001;
    int num;
    cin >> num;

    for(int i = 0; i < num; i++)
    {
        cin >> a;
        if(a < min) min = a;
        if(a > max) max = a;
    }

    cout << min << " " << max << endl;

    return 0;
}