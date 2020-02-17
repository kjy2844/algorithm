#include <iostream>
using namespace std;

bool is_right_triangle(int a, int b, int c)
{
    return ((a*a == b*b + c*c) || (b*b == c*c + a*a) || (c*c == a*a + b*b));
}

int main(void)
{
    int a, b, c;
    cin >> a >> b >> c;

    while(a || b || c){
        if(is_right_triangle(a, b, c)) cout << "right" << endl;
        else cout << "wrong" << endl;
        cin >> a >> b >> c;
    }

    return 0;
}