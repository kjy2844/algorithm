#include <iostream>
using namespace std;

int main(void)
{
    int t, num, j, k, count;
    float avg;
    int score[1000];
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> num;
        avg = 0;
        count = 0;
        for(j = 0; j < num; j++){
            cin >> score[j];
            avg += score[j];
        }
        avg /= num;
        for (k = 0; k < num; k++)
        {
            if((float)score[k] > avg) count++;
        }
        cout << fixed;
        cout.precision(3);
        cout << (float)count/num*100 << '%' << endl;
    }

    return 0;
}