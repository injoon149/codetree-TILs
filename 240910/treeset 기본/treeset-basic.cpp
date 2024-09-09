#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,x;
    cin >> n;
    set<int> s;
    string st;
    for(int i = 0; i<n; i++)
    {
        cin >> st;
        if(st == "add")
        {
            cin >> x;
            if(s.find(x) == s.end())
            {
                s.insert(x);
            }
        }
        else if(st == "remove")
        {
            cin >> x;
            s.erase(x);
        }
        else if(st == "find")
        {
            cin >> x;
            if(s.find(x) == s.end()) cout << "false" << endl;
            else cout << "true" << endl;
        }
        else if(st == "lower_bound")
        {
            cin >> x;
            if(s.lower_bound(x) == s.end()) cout << "None" << endl;
            else cout << *(s.lower_bound(x)) << endl;
        }
        else if(st == "upper_bound")
        {
            cin >> x;
            if(s.upper_bound(x) == s.end()) cout << "None" << endl;
            else cout << *(s.upper_bound(x)) << endl;
        }
        else if(st == "largest")
        {
            if(s.empty()) cout << "None" << endl;
            else{
                cout << *(s.rbegin()) << endl;
            }
        }
        else if(st == "smallest")
        {
            if(s.empty()) cout << "None" << endl;
            else {
                cout << *(s.begin()) << endl;
            }
        }
    }

    return 0;
}