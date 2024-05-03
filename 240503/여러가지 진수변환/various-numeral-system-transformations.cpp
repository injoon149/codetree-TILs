#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string change(int a, int b)
{
    string s;
    while(true)
    {
        if(a == 0) break;
        s += to_string(a%b);
        a = a/b;
    }
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    cout << change(a,b);

    return 0;
}