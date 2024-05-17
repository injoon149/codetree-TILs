#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, h, t;
    cin >> n >> h >> t;
    vector<int> v(n, 0);
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }
    int cnt = 0;
    int min = INT_MAX;

    for(int i = 0; i<n-t+1; i++)
    {
        for(int j = i+t-1; j<n; j++)
        {
            cnt = 0;
            for(int k = i; k<=j; k++)
            {
                cnt += (abs(v[k] - h));
            }
            if(min > cnt) min=cnt;
        }
    }
    cout << min;

    return 0;
}