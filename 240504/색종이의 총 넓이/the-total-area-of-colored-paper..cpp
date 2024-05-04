#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, x, y;
    cin >> n;
    vector<vector<int>> v(201, vector<int>(201, 0));
    for(int i = 0; i<n; i++)
    {
        cin >> x >> y;
        for(int i = 0; i<8; i++)
        {
            for(int j = 0; j<8; j++)
            {
                v[x+i+100][y+j+100] = 1;
            }
        }
    }
    int cnt = 0;
    for(int i = 0; i<201; i++)
    {
        for(int j = 0; j<201; j++)
        {
            if(v[i][j] == 1)
            {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}