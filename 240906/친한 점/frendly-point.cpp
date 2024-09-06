#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    long long x, y;
    set<pair<long long, long long>> s;
    for(int i = 0; i<n; i++)
    {
        cin >> x >> y;
        s.insert({x,y});
    }
    for(int i = 0; i<m; i++)
    {
        cin >> x >> y;
        if(s.upper_bound(make_pair(x,y)) == s.end())
        {
            if(s.lower_bound(make_pair(x,y)) == s.end())
            {
                cout <<"-1" <<" "<<"-1"<<endl;
            }
            else 
            {
                auto it = s.lower_bound(make_pair(x,y));
                cout << it->first<<" "<<it->second << endl;
            }
        }
        else
        {
            auto it = s.upper_bound(make_pair(x,y));
            cout << it->first<<" "<<it->second<<endl;
        }
    }
    return 0;
}