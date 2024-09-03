#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    unordered_map<string, int> map_num;
    string s;
    string st;
    for(int i = 0; i<n; i++)
    {
        cin >> s;
        map_num[s] = i+1;
    }
    for(int i = 0; i<m; i++)
    {
        cin >> st;
        for(auto iter = map_num.begin(); iter != map_num.end(); iter++)
        {
            if(iter->first == st)
            {
                cout << iter->second << endl;
                break;
            }
            else if(49<=st[0] && st[0]<=57)
            {
                if(iter->second == stoi(st))
                {
                    cout << iter->first << endl;
                    break;
                }
                
            }
        }
    }

    return 0;
}