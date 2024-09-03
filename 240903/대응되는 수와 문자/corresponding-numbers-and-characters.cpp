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
    unordered_map<int,string> map_num_second;
    string s;
    string st;
    for(int i = 0; i<n; i++)
    {
        cin >> s;
        map_num[s] = i+1;
        map_num_second[i+1] = s;
    }
    for(int i = 0; i<m; i++)
    {
        cin >> st;
        if(isdigit(st[0]))
        {
            cout << map_num_second[stoi(st)] << endl;
        }
        else
        {
            cout << map_num[st] << endl;
        }
    }

    return 0;
}