#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string str;
    int count = 1;
    getline(std::cin, str);

    for(int i = 0; i < str.length(); i++){
        if(str[i] == ' ') count++; 
    }

    if(str[0] == ' ') count--;
    if(str[str.length() - 1] == ' ') count--;

    if (str.length() == 0) cout << 0;
    else cout << count;

    return 0;
}