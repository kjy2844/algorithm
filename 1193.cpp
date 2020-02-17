#include <iostream>
using namespace std;

void find_fraction(int num)
{
    int numer = 0, denom = 0, sum = 1;
    while(num > 0){
        num -= sum;
        sum++;
    }
    if(sum%2)
    {
        numer = sum + num - 1;
        denom = sum - numer;
    }
    else
    {
        denom = sum + num - 1;
        numer = sum - denom;
    }
    cout << numer << "/" << denom << endl;
}

int main(void)
{
    int x;
    cin >> x;

    find_fraction(x);

    return 0;
}