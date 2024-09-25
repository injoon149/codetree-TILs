#include <iostream>
#include <climits>

#define MAX_N 500
using namespace std;

int arr[MAX_N+1][MAX_N+1];
int prefix_sum[MAX_N+1][MAX_N+1];

int n,k;
int ans = INT_MIN;

int GetSum(int x1, int y1, int x2, int y2)
{
    return prefix_sum[x2][y2] - prefix_sum[x1-1][y2] - prefix_sum[x2][y1-1]
    + prefix_sum[x1-1][y1-1];
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> k;
    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=n; j++)
        {
            cin >> arr[i][j];
        }
    }

    prefix_sum[0][0] = 0;
    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=n; j++)
        {
            prefix_sum[i][j] = prefix_sum[i-1][j] + prefix_sum[i][j-1]
            - prefix_sum[i-1][j-1] + arr[i][j];
        }
    }

    for(int i = 1; i<=n-k+1; i++)
    {
        for(int j = 1; j<=n-k+1; j++)
        {
            ans = max(ans, GetSum(i,j,i+k-1,j+k-1));
        }
    }
    cout << ans;
    return 0;
}