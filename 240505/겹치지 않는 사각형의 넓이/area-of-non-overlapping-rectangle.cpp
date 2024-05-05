#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    vector<vector<int>> v(2001, vector<int>(2001,0));
    int x1, y1, x2, y2;
    for(int i = 0; i<2; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        for(int j = x1; j<x2; j++)
        {
            for(int k = y1; k<y2; k++)
            {
                v[j+1000][k+1000] = 1;
            }
        }
    }
    cin >> x1 >> y1 >> x2 >> y2;
    for(int i = x1; i<x2; i++)
    {
        for(int j = y1; j<y2; j++)
        {
            if(v[i+1000][j+1000] == 1)
            {
                v[i+1000][j+1000] = 2;
            }
        }
    }
    int cnt = 0;
    for(int i = 0; i<2001; i++)
    {
        for(int j = 0; j<2001; j++)
        {
            if(v[i][j] == 1) cnt++;
        }
    }
    cout << cnt;
    return 0;
}