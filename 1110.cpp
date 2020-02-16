#include <iostream>
using namespace std;

int main(void)
{
    int n;
    int i = 0;
    cin >> n;
    int new_num = n;

    do{
        if(new_num < 10) new_num = 11*new_num;
        else new_num = (new_num/10 + new_num%10)%10 + new_num%10*10;
        i++;
    } while (n != new_num);

    cout << i << endl;
    return 0;
}