#include <iostream>
#include <vector>
using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

bool InRange(int x, int y, int n, int m)
{
    return (0<=x && x<n && 0<=y && y<m);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m, ' '));
    int nx = 1;
    int dir_num = 0;
    int x = 0, y = 0;
    v[x][y]= 'A';
    int plus_cnt = 0;
    for(int i = 2; i<= n*m; i++)
    {
        
        int nx = x + dx[dir_num];
        int ny = y + dy[dir_num];
        if(InRange(nx, ny, n, m) && v[nx][ny] == ' ')
        {
            x = nx;
            y = ny;
            if(plus_cnt == 25) plus_cnt = 0;
            else plus_cnt++;
            v[x][y] = 'A' + plus_cnt;
        }
        else
        {
            dir_num = (dir_num + 1) % 4;
            i--;
        }
    }
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}