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
    int t, n;
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;
        for(int j = n/2; j >= 2; j--){
            if(is_prime_number(j) && is_prime_number(n-j)){
                cout << j << ' ' << n-j << endl;
                break;
            }
        }
    }

    return 0;
}