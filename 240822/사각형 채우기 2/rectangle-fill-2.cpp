#include <iostream>
using namespace std;

int dp[1001];

int main() {
    // 여기에 코드를 작성해주세요.
    dp[1] = 1;
    dp[2] = 3;
    for(int i = 3; i<=1000; i++)
    {
        if(i % 2 == 0) dp[i] = (dp[i-1] * 2 + 1) % 10007;
        else dp[i] = (dp[i-1] * 2 -1) % 10007;
    }
    int n;
    cin >> n;
    cout << dp[n];
    
    return 0;
}