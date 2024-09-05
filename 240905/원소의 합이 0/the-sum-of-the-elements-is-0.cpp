#include <iostream>
#include <unordered_map>
using namespace std;

#define MAX_N 5000

int n;
int A[MAX_N], B[MAX_N], C[MAX_N], D[MAX_N];
unordered_map<int,int> freq;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for(int i = 0; i<n; i++) cin >> A[i];
    for(int i = 0; i<n; i++) cin >> B[i];
    for(int i = 0; i<n; i++) cin >> C[i];
    for(int i = 0; i<n; i++) cin >> D[i];

    long long ans = 0;

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            freq[A[i] + B[j]]++;
        }
    }

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            int diff = -C[i] -D[j];
            if(freq.count(diff) > 0) ans += freq[diff];
        }
    }
    cout << ans;
    return 0;
}