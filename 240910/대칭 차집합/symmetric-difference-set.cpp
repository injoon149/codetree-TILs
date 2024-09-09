#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    unordered_set<int> a;
    unordered_set<int> b;
    vector<int> v1;
    vector<int> v2;
    int n, m, num;
    cin >> n >> m;
    for(int i = 0; i<n; i++)
    {
        cin >> num;
        a.insert(num);
    }
    for(int i = 0; i<m; i++)
    {
        cin >> num;
        b.insert(num);
    }
    for(auto iter = a.begin(); iter != a.end(); iter++)
    {
        if(b.find(*iter) == b.end())
        {
            v1.push_back(*iter);
        }
    }
    for(auto iter = b.begin(); iter != b.end(); iter++)
    {
        if(a.find(*iter) == a.end())
        {
            v2.push_back(*iter);
        }
    }
    cout << v1.size() + v2.size();

    return 0;
}