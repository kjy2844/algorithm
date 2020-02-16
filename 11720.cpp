#include <iostream>
using namespace std;

int main(void)
{
    int n, sum = 0;
    char a;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> a;
        sum = sum + a - '0';
    }
    cout << sum << endl;
    return 0;
}