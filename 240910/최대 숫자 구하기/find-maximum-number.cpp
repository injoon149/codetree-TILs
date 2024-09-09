#include <iostream>
#include <set>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m,num;
    set<int> s;
    cin >> n >> m;
    for(int i = 1; i<=m; i++)
    {
        s.insert(i);
    }
    for(int i = 0; i<n; i++)
    {
        cin >> num;
        s.erase(num);
        cout <<*(s.rbegin())<<endl;
    }
    
    return 0;
}