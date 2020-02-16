#include <iostream>
using namespace std;

int d(int a)
{
    int sum = a;
    while(a){
        sum += (a%10);
        a /= 10;
    }
    return sum;
}

int main(void)
{   
    int arr[10000] = {0, };

    for(int i = 1; i < 10000; i++){
        if(d(i) < 10000) arr[d(i)]++;
    }
    for(int j = 1; j < 10000; j++){
        if(!arr[j]) cout << j << endl;
    }

    return 0;
}