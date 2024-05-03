#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string binary, s;
    cin >> binary;

    int num = 0;
    for(int i = 0; i<(int)binary.size(); i++)
    {
        num = num*2 + (binary[i] - '0');
    }
    num = num * 17;
    while(true)
    {
        if(num == 0) break;
        s += to_string(num%2);
        num = num /2;
    }
    reverse(s.begin(), s.end());
    cout << s;
    
    return 0;
}