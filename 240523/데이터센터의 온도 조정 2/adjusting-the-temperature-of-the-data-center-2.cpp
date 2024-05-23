#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, c, g, h;
    cin >> n >> c >> g >> h;
    vector<int> v;
    vector<int> ta(n, 0);
    vector<int> tb(n, 0);
    for(int i = 0; i<n; i++)
    {
        cin >> ta[i] >> tb[i];
    }
    for(int i = -1; i<=1001; i++)
    {
        int cnt = 0;
        for(int j = 0; j<n; j++)
        {
            if(i < ta[j]) cnt += c;
            else if(ta[j] <= i && i <= tb[j]) cnt += g;
            else if(i >= tb[j]) cnt += h;
        }
        v.push_back(cnt);
    }
    cout << *max_element(v.begin(), v.end());
    return 0;
}