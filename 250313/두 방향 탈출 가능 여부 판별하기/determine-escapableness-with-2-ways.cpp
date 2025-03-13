#include <iostream>
#include <vector>
using namespace std;

#define MAX_NUM 100

int n,m;
vector<vector<int>> v(101, vector<int>(101, 0));
vector<vector<bool>> visited(101, vector<bool>(101, false));

bool InRange(int x, int y)
{
    if(x >= 0 && x < n && y >=0 && y < m)
    {
        return true;
    }
    else return false;
}

bool Cango(int x, int y)
{
    if(InRange(x, y) == 0) return false;
    else
    {
        if(v[x][y] == 0 || visited[x][y] == 1)
        {
            return false;
        }
        return true;
    }
}

void dfs(int x, int y)
{
    int dx[2] = {1, 0};
    int dy[2] = {0, 1};
    for(int i = 0; i<2; i++)
    {
        int new_x = x + dx[i];
        int new_y = y + dy[i];
        if(Cango(new_x, new_y))
        {
            visited[new_x][new_y] = true;
            dfs(new_x, new_y);
        }
    }
}

int main()
{
    cin >> n >> m;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            cin >> v[i][j];
        }
    }
    visited[0][0] = 1;
    dfs(0, 0);
    cout << visited[n-1][m-1];
    return 0;

}