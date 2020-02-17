#include <iostream>
using namespace std;

int five_or_three(int n)
{
    int min = 5000;
    for(int i = n/5; i >= 0; i--){
        if((n - i*5)%3 == 0){
            if ((i + (n - i * 5) / 3) < min)
                min = (i + (n - i * 5) / 3);
        }
    }
    if (min == 5000) return -1;
    else return min;
}

int main(void)
{
    int N;
    cin >> N;

    cout << five_or_three(N) << endl;

    return 0;
}