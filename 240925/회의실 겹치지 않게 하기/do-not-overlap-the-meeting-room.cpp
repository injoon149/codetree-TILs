#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
using namespace std;

bool compare(pair<int,int> a, pair<int,int> b)
{
    return a.second < b.second;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n,s,e;
    cin >> n;
    vector<pair<int,int>> v;
    int cnt = 0;
    for(int i = 0; i<n; i++)
    {
        cin >> s >> e;
        v.push_back(make_pair(s,e));
    }
    sort(v.begin(), v.end(), compare);
    int last_e = -1;
    for(int i = 0; i<v.size(); i++)
    {
        int s,e;
        tie(s,e) = v[i];
        if(last_e <= s)
        {
            cnt++;
            last_e = e;
        }
    }
    
    cout << n- cnt;

    return 0;
}