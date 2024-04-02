#include <iostream>
using namespace std;

int minimum(int a, int b, int c)
{
    int num = a;
    if(num > b)
    {
        num = b;
    }
    if(num > c)
    {
        num = c;
    }
    return num;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b,c;
    cin >> a >> b >> c;
    cout << minimum(a,b,c);
    return 0;
}