#include <iostream>
using namespace std;

bool is_prime_number(int a)
{
    if (a == 1)
        return false;
    for (int i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
            return false;
    }
    return true;
}

int main(void)
{
    int m, n;
    cin >> m >> n;

    for(int i = m; i <= n; i++){
        if(is_prime_number(i)) cout << i << '\n';
    }

    return 0;
}