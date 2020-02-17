#include <iostream>
using namespace std;

int days_num(int day, int night, int goal)
{
    if(goal <= day) return 1;
    else if ((goal - day) % (day - night))
        return (goal - day) / (day - night) + 2;
    else
        return (goal - day) / (day - night) + 1;
}

int main(void)
{
    int a, b, v;
    cin >> a >> b >> v;

    cout << days_num(a, b, v);

    return 0;
}