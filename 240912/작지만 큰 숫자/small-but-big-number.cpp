#include <iostream>
#include <set>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m,num;
    cin >> n >> m;
    set<int> s;
    for(int i = 0; i<n; i++)
    {
        cin >> num;
        s.insert(-num);
    }
    for(int i = 0; i<m; i++)
    {
        cin >> num;
        num = num * -1;
        if(s.lower_bound(num) == s.end())
        {
            cout <<"-1" << endl;
        }
        else
        {
            cout << -*(s.lower_bound(num)) << endl;
            s.erase(s.lower_bound(num));
        }
    }

    return 0;
}