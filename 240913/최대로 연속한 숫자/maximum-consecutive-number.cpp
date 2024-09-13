#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int find_long(set<int> s)
{
    int max_num = 0;
    int cnt = 0;
    int num = 0;
    for(auto iter = s.begin(); iter != s.end(); iter++)
    {
        cnt++;
        num = *iter;
        if(*(s.upper_bound(num)) == (*iter + 1))
        {
            max_num = max(max_num, cnt);
        }
        else if(s.upper_bound(num) == s.end())
        {
            max_num = max(max_num, cnt);
        }
        else
        {
            max_num = max(max_num, cnt);
            cnt = 0;
        }
    }
    return max_num;
}

int main() {
    // 여기에 코드를 작성해주세요.
    set<int> s;
    int n,m,num;
    cin >> n >> m;
    for(int i = 0; i<=n; i++)
    {
        s.insert(i);
    }
    for(int i = 0; i<m; i++)
    {
        cin >> num;
        s.erase(s.find(num));
        cout << find_long(s) << endl;
    }

    
    return 0;
}