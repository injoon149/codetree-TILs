#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, t;
    cin >> n >> t;
    vector<int> v(n, 0);
    int cnt = 0;
    int max = 0;
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }
    for(int i = 0; i<n; i++)
    {
        if(i == 0 || v[i] <= t)
        {
            cnt = 1;
        }
        else if(v[i] > t)
        {
            cnt++;
        }
        if(cnt > max) max = cnt;
    }
    if(cnt == 1) cout << 0;
    else cout << cnt;

    return 0;
}