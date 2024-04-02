#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    for(int i = 0; i<s.size(); i++)
    {
        cout << s[i];
    }

    return 0;
}