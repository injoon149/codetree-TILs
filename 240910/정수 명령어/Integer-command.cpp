#include <iostream>
#include <set>
#include <queue>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string c;
    int n, t;
    cin >> t;
    for(int i = 0; i<t; i++)
    {
        int k;
        cin >> k;
        set<int> s;
        for(int j = 0; j<k; j++)
        {
            cin >> c >> n;
            if(c == "I")
            {
                s.insert(n);
            }
            else
            {
                if(!s.empty())
                {
                    if(n == 1)
                    {
                        auto it = --s.end();
                        s.erase(it);
                    }
                    else s.erase(s.begin());
                }
            }
        }
        if(s.empty()) cout << "EMPTY" << endl;
        else
        {
            auto it = --(s.end());
            cout << *it <<" " << *(s.begin()) << endl;
        }
        s.clear();
    }
    return 0;
}