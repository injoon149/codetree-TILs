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
    vector<vector<int>> dp(n, vector<int>(n, 0));
    dp[0][n-1] = v[0][n-1];
    for(int i = n-2; i>=0; i--)
    {
        dp[0][i] = dp[0][i+1] + v[0][i];
    } 
    for(int i = 1; i<n; i++)
    {
        dp[i][0] = dp[i-1][0] + v[i][0]; 
    }
    for(int i = n-2; i>=0; i--)
    {
        for(int j = 0; j<n; j++)
        {
            dp[i][j] = min(dp[i+1][j], dp[i][j-1]) + v[i][j];
        }
    }
    cout << dp[n-1][0];
    return 0;
}