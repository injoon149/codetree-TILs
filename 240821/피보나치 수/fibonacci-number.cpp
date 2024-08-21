#include <iostream>
using namespace std;

int fibonacci(int n)
{
    int dp[46] = {};
    dp[1] = 1;
    dp[2] = 1;
    for(int i = 3; i<=n; i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}