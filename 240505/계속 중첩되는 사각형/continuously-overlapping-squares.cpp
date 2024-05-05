#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, x1, x2, y1, y2;
    cin >> n;
    vector<vector<int>> v(201, vector<int>(201, 0));
    for(int i = 1; i<=n; i++)
    {
        if(i%2 == 1)
        {
            cin >> x1 >> y1 >> x2 >> y2;
            for(int j = x1; j< x2; j++)
            {
                for(int k = y1; k<y2; k++)
                {
                    v[j+100][k+100] = 1;
                }
            }
        }
        else
        {
            cin >> x1 >> y1 >> x2 >> y2;
            for(int j = x1; j< x2; j++)
            {
                for(int k = y1; k<y2; k++)
                {
                    v[j+100][k+100] = 2;
                }
            }
        }
    }
    int cnt = 0;
    for(int i = 0; i<201; i++)
    {
        for(int j = 0; j<201; j++)
        {
            if(v[i][j] == 2) cnt++;
        }
    }
    cout << cnt;
    return 0;
}