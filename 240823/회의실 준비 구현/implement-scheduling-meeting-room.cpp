#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct compare{
    bool operator()(pair<int, int> a, pair<int,int> b) {
        return a.second < b.second;

    }
};

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int s,e;
    vector<pair<int,int>> v;
    vector<int> last;
    for(int i = 0; i<n; i++)
    {
        cin >> s >> e;
        v.push_back(make_pair(s, e));
    }
    sort(v.begin(), v.end(), compare());
    int cnt = 1;
    last.push_back(v[0].second);
    if(n== 1)
    {
        cout << 1;
        return 0;
    }
    for(int i = 1; i<n; i++)
    {
        int flag = 0;
        for(int j = 0; j<last.size(); j++)
        {
            if(v[i].first < last[j])
            {
                flag = 0;
                break;
            }
            else
            {
                flag = 1;
            }
        }
        if(flag == 1)
        {
            last.push_back(v[i].second);
            cnt++;
        }
    }
    cout << cnt;
    
    return 0;
}