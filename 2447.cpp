#include <iostream>
using namespace std;

void recursive_painting(int n)
{
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i%3==1) cout << " ";
            else cout << "*";
        }
        cout << "\n";
    }
}

int main(void)
{
    int n;
    cin >> n;

    recursive_painting(n);

    return 0;
}