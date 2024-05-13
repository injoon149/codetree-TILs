#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    vector<int> v(n+1, 0);
    for(int i = 1; i<=n; i++)
    {
        cin >> v[i];
    }
    int min = INT_MAX;
    int cnt = 0;
    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=n; j++)
        {
            cnt += (v[j] * abs(j-i));
        }
        if(cnt < min) {
            min = cnt;
            cnt = 0;
        }
    }
    cout << min;

    return 0;
}