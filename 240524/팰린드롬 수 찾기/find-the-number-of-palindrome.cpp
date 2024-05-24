#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int x, y;
    cin >> x >> y;
    int cnt = 0;
    for(int i = x; i<=y; i++)
    {
        string s = to_string(i);
        string s2 = s;
        reverse(s.begin(), s.end());
        if(s2 == s) cnt++;
    }
    cout << cnt;
    return 0;
}