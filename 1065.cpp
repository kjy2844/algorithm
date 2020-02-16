#include <iostream>
using namespace std;

bool han(int a)
{
    if(a==1000) return false;
    else if(!(a/100)) return true;
    else{
        return (a%10 + a/100 == 2*(a/10%10));
    }
}

int main(void)
{
    int n, count = 0;

    cin >> n;

    for(int i = 1; i <= n; i++){
        if(han(i)) count++;
    }
    cout << count << endl;

    return 0;
}