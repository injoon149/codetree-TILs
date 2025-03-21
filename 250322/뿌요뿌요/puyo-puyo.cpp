#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int grid[100][100];
bool visited[100][100];

int curr_block_num;
int bomb_cnt;
int max_block;

bool InRange(int x, int y)
{
    return (x >= 0 && x < n && y >=0 && y < n);
}

bool Cango(int x, int y, int color)
{
    if(!InRange(x,y)) return false;
    else
    {
        if(visited[x][y] == 1 || grid[x][y] != color)
        {
            return false;
        }
        else return true;
    }
}

void DFS(int x, int y)
{
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};

    for(int dir = 0; dir <4; dir++)
    {
        int new_x = x + dx[dir];
        int new_y = y + dy[dir];
        if(Cango(new_x, new_y, grid[x][y]))
        {
            visited[new_x][new_y] = true;
            curr_block_num++;
            DFS(new_x, new_y);
        }
    }
}

int main()
{
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cin >> grid[i][j];
        }
    }

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(!visited[i][j] && grid[i][j])
            {
                visited[i][j] = true;
                curr_block_num = 1;

                DFS(i,j);

                if(curr_block_num >= 4) bomb_cnt++;
                max_block = max(max_block, curr_block_num);
            }
        }
    }

    cout << bomb_cnt <<" " << max_block;
    return 0;
}