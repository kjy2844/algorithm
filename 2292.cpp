#include <iostream>
using namespace std;

int How_Many_rooms(int n)
{
    int i = 1, num = 1;
    n -= 2;
    while(n >= 0){
        n -= 6*i;
        i++;
        num++;
    }
    return num;
    
}

int main(void)
{
    int n;
    cin >> n;

    cout << How_Many_rooms(n) << endl;

    return 0;
}