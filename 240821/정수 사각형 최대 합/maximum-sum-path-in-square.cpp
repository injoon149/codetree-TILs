#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n, 0));
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cin >> v[i][j];
        }
    }
    vector<vector<int>> dp(101, vector<int>(101, 0));
    dp[0][0] = v[0][0];
    for(int i = 1; i<n; i++)
    {
        dp[i][0] = dp[i-1][0] + v[i][0];
    }
    for(int i = 1; i<n; i++)
    {
        dp[0][i] = dp[0][i-1] + v[0][i];
    }
    for(int i = 1; i<n; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            dp[i][j] = max(dp[i-1][j] + v[i][j], dp[i][j-1] + v[i][j]);
        }
    }
    cout << dp[n-1][n-1];


    return 0;
}