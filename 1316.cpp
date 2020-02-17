#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int t, sum = 0;
    bool isGroup = true;
    cin >> t;

    string str;

    for(int i = 0; i < t; i++){
        int arr[26] = {};
        cin >> str;
        isGroup = true;
        for(int j = 0; j < str.length() - 1; j++){
            if(str[j] == str[j+1]) continue;
            else if(arr[str[j] - 'a']) isGroup = false;
            else
                arr[str[j] - 'a'] = 1;
        }
        if (arr[str[str.length() -1] -'a']) isGroup = false;
        if(isGroup) sum++;
    }
    cout << sum;

    return 0;
}