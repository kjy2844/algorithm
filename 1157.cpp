#include <iostream>
using namespace std;

int main(void)
{
    int max = 0, arr[27] = {};
    string str;

    cin >> str;

    arr[26] = -1;

    for(int i = 0; i < str.length(); i++)
    {
        
        str[i] = toupper(str[i]);
        arr[str[i] - 'A']++;
        if(arr[str[i] - 'A'] > max){
            max = arr[str[i] - 'A'];
            arr[26] = str[i] - 'A';
        }
        else if (arr[str[i] - 'A'] == max)
            arr[26] = -1;
        else continue;  
    }

    if(arr[26] == -1) cout << '?';
    else cout << (char)('A'+arr[26]);

    return 0;
}