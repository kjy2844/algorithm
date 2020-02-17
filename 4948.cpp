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
    int n, count;
    cin >> n;

    while(n){
        count = 0;
        for(int i = n+1; i <= 2*n; i++){
            if(is_prime_number(i)) count++;
        }
        cout << count << endl;
        cin >> n;
    }

    return 0;
}