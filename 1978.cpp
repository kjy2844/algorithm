#include <iostream>
using namespace std;

bool is_prime_number(int a)
{
    if(a == 1) return false;
    for(int i = 2; i*i <= a; i++){
        if(a%i == 0) return false;
    }
    return true;
}

int main(void)
{
    int n, count = 0, a;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> a;
        if(is_prime_number(a))count++;
    }
    cout << count << endl;

    return 0;
}