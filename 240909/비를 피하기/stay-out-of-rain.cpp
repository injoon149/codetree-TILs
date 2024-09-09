#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;

int n, h, m;
int arr[101][101];
int dist[101][101]; // 거리 저장
bool visited[101][101];
int dx[4] = {0, 1, 0, -1}; // 상하좌우 이동
int dy[4] = {1, 0, -1, 0};

bool InRange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < n);
}

void BFS(vector<pair<int,int>> shelters) {
    queue<pair<int,int>> q;

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            dist[i][j] = -1;
        }
    }

    for(auto shelter : shelters)
    {
        int sx = shelter.first;
        int sy = shelter.second;
        q.push({sx,sy});
        dist[sx][sy] = 0;
        visited[sx][sy] = true;
    }

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i = 0; i<4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(InRange(nx,ny) && !visited[nx][ny] && arr[nx][ny] != 1)
            {
                visited[nx][ny] = true;
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx,ny});
            }
        }
    }


}

int main()
{
    cin >> n >> h >> m;
    vector<pair<int,int>> people;
    vector<pair<int,int>> shelters;

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cin >> arr[i][j];
            if(arr[i][j] == 2){
                people.push_back({i,j});
            } else if(arr[i][j] == 3){
                shelters.push_back({i,j});
            }
        }
    }

    BFS(shelters);

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(arr[i][j] == 2){
                cout << dist[i][j] <<" ";
            } else {
                cout << 0 <<" ";
            }
        }
        cout << endl;
    }

    return 0;
}