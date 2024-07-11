#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;
    cin >> n >> k;
    vector<int> v(n, 0);
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }
    int min_cost = INT_MAX;
    for(int i = 1; i<=10000; i++)
    {
        int cost = 0;
        for(int j = 0; j<n; j++)
        {
            int cost2 = 0;
            if(v[j] < i || v[j] > i+k)
            {
                cost2 = min(abs(v[j] - i), abs(i+k - v[j]));
            }       
            cost += cost2;
        }
        if(min_cost > cost) min_cost = cost;
    }
    cout << min_cost;
    return 0;
}