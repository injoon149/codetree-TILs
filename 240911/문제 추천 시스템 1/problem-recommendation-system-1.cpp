#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,p,l,m,x;
    cin >> n;
    set<pair<int,int>> s;
    string st;
    pair<int,int> tmp;
    for(int i = 0; i<n; i++)
    {
        cin >> p >> l;
        s.insert({l,p});
    }
    cin >> m;
    for(int i = 0; i<m; i++)
    {
        cin >> st;
        if(st == "rc")
        {
            cin >> x;
            if(x == 1)
            {
                tmp = *(s.rbegin());
                cout << tmp.second << endl;
            }
            else if(x == -1)
            {
                tmp = *(s.begin());
                cout << tmp.second << endl;
            }
        }
        else if(st == "ad")
        {
            cin >> p >> l;
            s.insert({l,p});
        }
        else
        {
            cin >> p >> l;
            s.erase({l,p});
        }
    }

    return 0;
}