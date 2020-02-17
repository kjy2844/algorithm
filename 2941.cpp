#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string str;
    cin >> str;

    int count = 0;
    char s1, s2, s3;

    if(str.length() == 0) count = 0;
    else if(str.length() == 1) count = 1;
    else {
        for (int i = 0; i < str.length(); i++)
        {
            s1 = str[i], s2 = str[i+1];
            if(str.length() - 1 == i) {
                count++;
                break;
            }
            if(s1 == 'c'){
                if(s2 == '=' || s2 == '-') i++;
            }
            else if(s1 == 'd' && s2 == '-') i++;
            else if (s1 == 'l' && s2 == 'j') i++;
            else if (s1 == 'n' && s2 == 'j') i++;
            else if (s1 == 's' && s2 == '=') i++;
            else if (s1 == 'z' && s2 == '=') i++;
            else if ((str.length() -2 != i) && s1 == 'd' && s2 == 'z' && str[i+2] == '=') i += 2;
            count++;
        }
    }

    cout << count;

    return 0;
}