#include <iostream>
using namespace std;

int main(void)
{
    int a, b, c;
    int arr[10] = {0, };

    cin >> a >> b >> c;
    int num = a*b*c;

    while(num != 0){
        arr[num%10]++;
        num /= 10;
    }

    for(int j = 0; j < 10; j++){
        cout << arr[j] << endl;
    }

    return 0;
}