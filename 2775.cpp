#include <iostream>
using namespace std;

int main(void)
{
    int t, k, n;
    cin >> t;
    int arr[15][15] = {};

    for(int i = 1; i < 15; i++)
    {
        arr[0][i] = i;
        arr[i][1] = 1;
    }

    for(int i = 1; i < 15; i++)
    {
        for(int j = 1; j < 15; j++)
        {
            arr[i][j] = arr[i][j-1] + arr[i-1][j];
        }
    }

    for(int i = 0; i < t; i++)
    {
        cin >> k >> n;
        cout << arr[k][n] << endl;
    }

    return 0;
}