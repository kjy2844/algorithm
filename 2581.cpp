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

    int min = 0, sum = 0;

    for(int i = n; i >= m; i--){
        if(is_prime_number(i)) {
            min = i;
            sum += i;
        }
    }
    if(min == 0) cout << -1;
    else cout << sum << "\n" << min << endl;
    
    return 0;
}