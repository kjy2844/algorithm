#include <iostream>
using namespace std;

int main(void)
{
    int t, x1, y1, r1, x2, y2, r2;
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        int dist = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);

        if((x1 == x2) && (y1 == y2))
        {
            if(r1 == r2) cout << -1 << endl;
            else cout << 0 << endl;
        }
        else
        {
            if (dist > (r1 + r2) * (r1 + r2))
                cout << 0 << endl;
            else if (dist == (r1 + r2) * (r1 + r2))
                cout << 1 << endl;
            else if ((r1 - r2) * (r1 - r2) < dist && dist < (r1 + r2) * (r1 + r2))
                cout << 2 << endl;
            else if ((r1 - r2) * (r1 - r2) == dist)
                cout << 1 << endl;
            else if ((r1 - r2) * (r1 - r2) > dist)
                cout << 0 << endl;
        }
    }

    return 0;
}