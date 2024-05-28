#include <iostream>
#include <algorithm>
#define MAX_M 100
using namespace std;

int n, m;
int a[MAX_M], b[MAX_M];

int CountNum(int first, int second) {
    int cnt = 0;
    for(int i = 0; i<m; i++)
    {
        if(first == a[i] && first == b[i]) cnt++;
        else if(second == a[i] && first == b[i]) cnt++;
    }
    return cnt;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;
    for(int i = 0; i<m; i++)
    {
        cin >> a[i] >> b[i];
    }
    int ans = 0;
    for(int i = 1; i<=n; i++)
    {
        for(int j = i+1; j<=n; j++)
        {
            ans = max(ans, CountNum(i, j));
        }
    }
    cout << ans;
    return 0;
}