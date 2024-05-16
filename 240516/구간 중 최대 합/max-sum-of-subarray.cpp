#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;
    cin >> n >> k;
    vector<int> v(n, 0);
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }
    int max = 0;
    int cnt = 0;
    for(int i = 0; i<=n-k; i++)
    {
        for(int j = i; j<i+k; j++)
        {
            cnt += v[j];
        }
        if(max < cnt) max = cnt;
        cnt = 0;
    }
    cout << max;
    return 0;
}