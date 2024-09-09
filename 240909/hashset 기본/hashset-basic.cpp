#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, x;
    cin >> n;
    string s;
    unordered_set<int> set_num;
    for(int i = 0; i<n; i++)
    {
        cin >> s;
        if(s == "add")
        {
            cin >> x;
            if(set_num.find(x) == set_num.end()) 
            {
                set_num.insert(x);
            }
        }
        else if(s == "remove")
        {
            cin >> x;
            set_num.erase(x);
        }
        else if(s == "find")
        {
            cin >> x;
            if(set_num.find(x) == set_num.end())
            {
                cout << "false" << endl;
            }
            else cout << "true" << endl;
        }
    }

    return 0;
}