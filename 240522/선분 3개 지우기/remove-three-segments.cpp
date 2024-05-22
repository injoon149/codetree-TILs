#include <iostream>
#define MAX_N 10
#define MAX_A 100
using namespace std;

int n;
int l[MAX_N], r[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cin >> l[i] >> r[i];
    }
    int ans = 0;
    for(int i = 0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            for(int k = j+1; k<n; k++)
            {
                bool overlap = false;
                int arr[MAX_A + 1] = {};

                for(int x = 0; x<n; x++)
                {
                    if(x == i || x == j || x == k) continue;
                    for(int y = l[x]; y<=r[x]; y++) arr[y]++;
                }
                for(int x = 0; x<=MAX_A; x++)
                {
                    if(arr[x] > 1) overlap = true;
                }
                if(overlap == false) ans++;
            }
        }
    }
    cout << ans;
    return 0;
}