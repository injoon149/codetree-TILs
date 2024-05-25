#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }
    int min_diff = INT_MAX;
    for(int i = 0; i<n; i++)
    {
        v[i] *= 2;
        for(int j = 0; j<n; j++)
        {
            int remaining_arr[n-1] = {};
            int cnt = 0;
            for(int k = 0; k<n; k++)
            {
                if(k != j)
                {
                    remaining_arr[cnt++] = v[k];
                }
            }
            int sum_diff = 0;
            for(int k = 0; k<n-2; k++)
            {
                sum_diff += abs(remaining_arr[k+1] - remaining_arr[k]);
            }
            min_diff = min(min_diff, sum_diff);
        }
        v[i] /= 2;
    }
    cout << min_diff;
    
    return 0;
}