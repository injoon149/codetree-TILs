#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    cin >> s;
    set<char> set1;
    for(int i = 0; i<s.size(); i++)
    {
        set1.insert(s[i]);
    }
    if(set1.size() != s.size())
    {
        cout << "Yes";
    }
    else cout << "No";
    return 0;
}