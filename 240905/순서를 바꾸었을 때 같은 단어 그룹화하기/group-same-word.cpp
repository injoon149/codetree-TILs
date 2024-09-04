#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    string s;
    cin >> n;
    unordered_map<string,int> m;
    for(int i = 0; i<n; i++)
    {
        cin >> s;
        sort(s.begin(), s.end());
        m[s]++;
    }
    int max_num = 0;
    for(auto iter = m.begin(); iter != m.end(); iter++)
    {
        if(max_num < iter->second)
        {
            max_num = iter->second;
        }
    }
    cout << max_num;
    return 0;
}