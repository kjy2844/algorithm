#include <iostream>
using namespace std;

int main(void)
{
    char arr[81];
    int score = 0, count = 0, j = 0;
    int num;
    
    cin >> num;

    for(int i = 0; i < num; i++){
        cin >> arr;
        score = 0, count = 0, j = 0;
        while(arr[j]){
            if(arr[j] == 'O'){
                count++;
                score += count;
            }
            else count = 0;
            j++;
        }
        cout << score << endl;
    }

    return 0;
}