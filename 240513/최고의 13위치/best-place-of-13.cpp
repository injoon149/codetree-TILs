#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n, 0));
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cin >> v[i][j];
        }
    }
    int max = 0;
    int cnt = 0;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n-2; j++)
        {
            cnt = cnt + (v[i][j] + v[i][j+1] + v[i][j+2]);
            if(max < cnt)
            {
                max = cnt;
                cnt = 0;
            }
        }
    }
    cout << max;
    return 0;
}