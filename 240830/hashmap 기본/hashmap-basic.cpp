#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    unordered_map<int,int> m;
    int n;
    cin >> n;
    string s;
    int k,v;
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
                cout << "None" << endl;
            }
            else cout << (m.find(k))->second << endl;
        }
    }
    return 0;
}