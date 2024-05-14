#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    cin >> s;
    if(s.size() <= 3) {
        cout << 0;
        return 0;
    }
    int cnt = 0;
    for(int i = 0; i<s.size()-3; i++)
    {
        for(int j = i+1; j<s.size()-1; j++)
        {
            if(s[i] == '(' && s[i+1] == '(' && s[j] == ')' && s[j+1] ==')')
            {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}