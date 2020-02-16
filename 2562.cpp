#include <iostream>
using namespace std;

int main(void)
{
    int max = 0, count = 0;
    int num;

    for(int i = 1; i <= 9; i++){
        cin >> num;
        if (num > max) {
            max = num;
            count = i;
        }
    }

    cout << max << "\n" << count;

    return 0;
}