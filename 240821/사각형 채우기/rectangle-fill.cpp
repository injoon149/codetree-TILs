#include <iostream>
using namespace std;

int dp[1001];

int main() {
    // 여기에 코드를 작성해주세요.
    dp[1] = 1;
    dp[2] = 2;
    for(int i = 3; i<=1000; i++)
    {
        dp[i] = (dp[i-1]%10007 + dp[i-2]%10007) % 10007;
    }
    int n;
    cin >> n;
    cout << dp[n];
    return 0;
}