#include <iostream>
#include <vector>

using namespace std;

int n,m;
vector<vector<int>> grid(50, vector<int>(50, 0));
vector<int> safe_v(n, 0);
vector<vector<bool>> visited(50, vector<bool>(50,false));
int zone_num;

void InitializeVisited() {
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            visited[i][j] = false;
        }
    }
}

bool InRange(int x, int y)
{
    return x >= 0 && x < n && y >=0 && y < m;
}

bool Cango(int x, int y, int k)
{
    if(!InRange(x, y)) return false;
    else
    {
        if(visited[x][y] == 1 || grid[x][y] <= k)
        {
            return false;
        }
        else return true;
    } 
}

void DFS(int x, int y, int k)
{
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};

    for(int dir = 0; dir < 4; dir++)
    {
        int new_x = x + dx[dir];
        int new_y = y + dy[dir];

        if(Cango(new_x, new_y, k))
        {
            visited[new_x][new_y] = true;
            DFS(new_x, new_y, k);
        }
    }
}

void GetZoneNum(int k)
{
    zone_num = 0;
    InitializeVisited();

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            if(Cango(i,j,k))
            {
                visited[i][j] = true;
                zone_num++;

                DFS(i,j,k);
            }
        }
    }
}


int main() {
    int max_zone_num = -1;
    int answer_k = 0;

    cin >> n >> m;

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            cin >> grid[i][j];
        }
    }

    for(int k = 1; k<=100; k++)
    {
        GetZoneNum(k);
        if(zone_num > max_zone_num) {
            max_zone_num = zone_num;
            answer_k = k;
        }
    }
    cout << answer_k << " " << max_zone_num;




    return 0;
}
