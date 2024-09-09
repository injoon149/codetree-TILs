#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    set<int> s1;
    vector<int> s2;
    int n;
    cin >> n;
    int num;
    for(int i = 0; i<n; i++)
    {
        cin >> num;
        s1.insert(num);
    }
    int m;
    cin >> m;
    for(int i = 0; i<m; i++)
    {
        cin >> num;
        s2.push_back(num);
    }
    int flag = 0;
    for(int i = 0; i<m; i++)
    {
        if(s1.find(s2[i]) == s1.end())
        {
            cout << 0 <<" ";
        }
        else cout << 1 <<" ";
    }
    return 0;
}