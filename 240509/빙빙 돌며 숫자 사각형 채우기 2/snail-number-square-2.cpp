#include <iostream>
#include <vector>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

bool InRange(int x, int y, int n, int m)
{
    return (0<=x && x<n && 0<=y && y<m);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m, 0));
    v[0][0] = 1;
    int dir_num = 0;
    int x = 0, y =0;
    for(int i = 2; i<=n*m; i++)
    {
        if(InRange(x+dx[dir_num], y+dy[dir_num], n, m) && v[x+dx[dir_num]][y+dy[dir_num]] == 0) 
        {
            x += dx[dir_num];
            y += dy[dir_num];
            v[x][y] = i;
        }
        else
        {
            dir_num = (dir_num+1)%4;
            i--;
        }
    }
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            cout << v[i][j] <<" ";
        }
        cout << endl;
    }
    return 0;
}