#include <iostream>
#include <set>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin >> n >> m;
    set<long long> s;
    long long num;
    long long num2;
    for(int i = 0; i<n; i++)
    {
        cin >> num;
        s.insert(num);
    }
    for(int i = 0; i<m; i++)
    {
        cin >> num2;
        if(s.lower_bound(num2) == s.end()) cout << "-1" << endl;
        else{
            cout << *(s.lower_bound(num2)) << endl;
        }
    }

    return 0;
}