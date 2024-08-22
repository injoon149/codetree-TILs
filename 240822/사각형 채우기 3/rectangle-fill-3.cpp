#include <iostream>
using namespace std;

long long dp[1001];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    dp[1] = 2;
    for(int i = 2; i<=1000; i++)
    {
        dp[i] = (dp[i-1] * 3 + 1) % 1,000,000,007;
    }
    cout << dp[n];
    
    return 0;
}