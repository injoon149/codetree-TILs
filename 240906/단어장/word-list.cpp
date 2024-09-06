#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string s;
    map<string,int> m;
    for(int i = 0; i<n; i++)
    {
        cin >> s;
        m[s]++;
    }
    for(auto iter = m.begin(); iter != m.end(); iter++)
    {
        cout << iter->first <<" "<<iter->second<<endl;
    }
    return 0;
}