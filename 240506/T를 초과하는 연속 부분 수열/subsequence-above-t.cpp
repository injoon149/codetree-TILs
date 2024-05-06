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
            cnt = 0;
        }
        else if(v[i] > t)
        {
            cnt++;
            if(cnt > max) max = cnt;
        }
        
    }
    cout << max;

    return 0;
}