#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int al[26];
    fill_n(al,26, -1);

    string str;
    cin >> str;

    for(int i = 0; i < str.length(); i++){
        if(al[str[i]-'a'] == -1)
            al[str[i] - 'a'] = i;
    }
    for(int j = 0; j < 26; j++){
        cout << al[j] << endl;
    }

    return 0;
}