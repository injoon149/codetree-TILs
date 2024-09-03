#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string s;
    unordered_map<string,int> m;
    for(int i = 0; i<n; i++)
    {
        cin >> s;
        if(m.find(s) == m.end())
        {
            m[s] = 1;
        }
        else m[s]++;
    }
    int max = 0;
    for(auto it = m.begin(); it != m.end(); it++)
    {
        if(it->second > max)
        {
            max = it->second;
        }
    }
    cout << max;

    return 0;
}