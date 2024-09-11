#include <iostream>
#include <set>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m,x,y;
    cin >> n >> m;
    set<pair<int,int>> s;
    for(int i = 0; i<n; i++)
    {
        cin >> x >> y;
        s.insert({x,y});
    }
    int k;
    for(int i = 0; i<m; i++)
    {
        cin >> k;
        if(s.lower_bound({k,-1}) == s.end())
        {
            cout <<"-1 -1"<<endl;
        }
        else{
            pair<int,int> tmp = *s.lower_bound(make_pair(k,-1));
            cout << tmp.first <<" " <<tmp.second << endl;
            s.erase(tmp);
        }
    }

    return 0;
}