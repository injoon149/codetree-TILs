#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<int> dp(1001, 0);
vector<int> arr(1001, 0);

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
    int min_num;
    for(int i = 1; i<=n; i++)
    {
        for(int j = 0; j<i; j++)
        {
            if(arr[j] > arr[i])
            {
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
    }
    cout << *max_element(dp.begin(), dp.end());
    return 0;
}