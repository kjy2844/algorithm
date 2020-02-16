#include <iostream>
using namespace std;

int main(void)
{
    int max = -1, num = 0;
    float avg = 0.0;
    int score;
    cin >> num;

    for(int i = 0; i < num; i++){
        cin >> score;
        avg += score;
        if(score > max) max = score;
    }
    avg = avg/(num*max)*100;
    cout << avg << endl;

    return 0;
}