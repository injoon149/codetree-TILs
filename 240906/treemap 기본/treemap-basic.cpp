#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,k,v;
    map<int,int> m;
    cin >> n;
    string s;
    for(int i = 0; i<n; i++)
    {
        cin >> s;
        if(s == "add")
        {
            cin >> k >> v;
            m[k] = v;
        }
        else if(s == "remove")
        {
            cin >> k;
            m.erase(k);
        }
        else if(s == "find")
        {
            cin >> k;
            if(m.find(k) == m.end())
            {
                cout <<"None"<<endl;
            }
            else cout << m[k] << endl;
        }
        else if(s == "print_list")
        {
            if(m.empty()) cout <<"None"<<endl;
            else
            {
                for(auto iter = m.begin(); iter != m.end(); iter++)
                {
                    cout << iter->second<<" ";
                }
                cout << endl;
            }
        }
    }

    return 0;
}