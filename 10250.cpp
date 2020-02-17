#include <iostream>
using namespace std;

int room_number(int height, int width, int number)
{
    int ans_h = 1, ans_w = 1;
    ans_w += (number - 1)/height;
    ans_h = (number-1)%height+1;

    return ans_h*100 + ans_w;

}

int main(void)
{
    int t, h, w, n;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> h >> w >> n;
        cout << room_number(h, w, n) << endl;
    }

    return 0;
}