#include <iostream>
using namespace std;

int main(void)
{
    int num;
    int res[42] = {0,};
    int count = 0;

    for(int i = 0; i < 10; i++){
        cin >> num;
        if(!res[num%42]++) count++;
    }

    cout << count;

    return 0;
}