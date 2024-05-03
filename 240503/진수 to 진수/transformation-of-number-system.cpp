#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    string binary, s;
    cin >> binary;
    int num = 0;
    for(int i =0; i<(int)binary.size(); i++)
    {
        num = num * a + (binary[i] - '0');
    }
    while(true)
    {
        if(num == 0) break;
        s += to_string(num%b);
        num = num / b;
    }
    reverse(s.begin(), s.end());
    cout << s;

    return 0;
}