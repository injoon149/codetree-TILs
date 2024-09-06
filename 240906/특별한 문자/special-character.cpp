#include <iostream>
#include <unordered_map>
#include <string>
#include <set>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    cin >> s;
    unordered_map<char,int> m;
    set<char> set1;
    for(int i = 0; i<s.size(); i++)
    {
        m[s[i]]++;
    }
    for(auto iter = m.begin(); iter != m.end(); iter++)
    {
        if(iter->second == 1)
        {
            set1.insert(iter->first);
        }
    }
    if(set1.empty()) cout << "None";
    else cout << *(set1.begin());
    return 0;
}