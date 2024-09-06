#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double n;
    cin >> n;
    map<string,int> m;
    string s;
    for(int i = 0; i<n; i++)
    {
        cin >> s;
        m[s]++;
    }
    int cnt = 0;
    for(auto iter = m.begin(); iter != m.end(); iter++)
    {
        cout << iter->first <<" ";
        cout << fixed;
        cout.precision(4);
        cout << ((iter->second)*100) / n << endl;
    }
    return 0;
}