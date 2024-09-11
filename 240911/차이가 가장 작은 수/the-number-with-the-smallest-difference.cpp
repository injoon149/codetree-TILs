#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m,num;
    cin >> n >> m;
    set<int> s;
    vector<int> v;
    for(int i = 0; i<n; i++)
    {
        cin >> num;
        s.insert(num);
    }
    for(auto iter = s.begin(); iter != s.end(); iter++)
    {
        if(s.lower_bound(*iter + m) != s.end())
        {
            v.push_back(*(s.lower_bound(*iter + m)) - *iter);
        }
    }
    if(v.size() == 0) cout <<"-1";
    else cout << *min_element(v.begin(), v.end());
    return 0;
}