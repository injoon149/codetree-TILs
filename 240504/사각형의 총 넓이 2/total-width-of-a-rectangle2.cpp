#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, x1, y1, x2, y2;
    cin >> n;
    vector<vector<int>> v(101, vector<int>(101, 0));
    while(n--)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        for(int i = x1; i< x2; i++)
        {
            for(int j = y1; j<y2; j++)
            {
                v[i][j] = 1;
            }
        }
    }
    int cnt = 0;
    for(int i = 0; i<101; i++)
    {
        for(int j = 0; j<101; j++)
        {
            if(v[i][j] == 1) cnt++;
        }
    }
    cout << cnt;
    return 0;
}