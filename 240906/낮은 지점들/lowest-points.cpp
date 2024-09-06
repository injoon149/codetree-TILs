#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    long long x,y;
    cin >> n;
    unordered_map<long long, long long> m;
    for(int i = 0; i<n; i++)
    {
        cin >> x >> y;
        if(m.find(x) == m.end())
        {
            m[x] = y;
        }
        else
        {
            if(m[x] > y) m[x] = y;
        }
    }
    long long cnt = 0;
    for(auto iter = m.begin(); iter != m.end(); iter++)
    {
        cnt += (iter->second);
    }
    cout << cnt;
    return 0;
}