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
    for(auto iter = m.begin(); iter != m.end(); iter++)
    {
        if(iter->second == 1)
        {
            cout << iter->first;
            return 0;
        }
    }
    cout <<"None";
    return 0;
}