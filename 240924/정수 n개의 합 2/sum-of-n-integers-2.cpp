#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.

    int n,k;
    cin >> n >> k;
    vector<int> v(n+1, 0);
    for(int i = 1; i<=n; i++)
    {
        cin >> v[i];
    }
    for(int i = 1; i<=n; i++)
    {
        v[i] = v[i-1] + v[i];
    }
    int max_num = 0;
    for(int i = 0; i<=n-k; i++)
    {
        int num = v[i+k] - v[i];
        max_num = max(max_num, num);
    }
    cout << max_num;

    return 0;
}