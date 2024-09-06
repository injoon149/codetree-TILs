#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    cin >> s;
    unordered_map<char,int> m;
    for(int i = 0; i<s.size(); i++)
    {
        m[s[i]]++;
    }
    for(int i = 0; i<s.size(); i++)
    {
        if(m[s[i]] == 1) {
            cout << s[i];
            return 0;
        }
    }
    cout << "None";
    return 0;
}