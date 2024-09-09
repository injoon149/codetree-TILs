#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    unordered_set<int> a;
    vector<int> b;
    int n, m, num;
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cin >> num;
        a.insert(num);
    }
    cin >> m;
    for(int i = 0; i<m; i++)
    {
        cin >> num;
        b.push_back(num);
    }
    for(int i = 0; i<m; i++)
    {
        if(a.find(b[i]) == a.end())
        {
            cout << 0 << endl;
        }
        else cout << 1 << endl;
    }

    return 0;
}