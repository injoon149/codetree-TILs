#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, k;
bool visited[101][101] = {false, };
int arr[101][101] = {0, };
queue<pair<int,int>> q;

bool InRange(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < n;
}

bool Cango(int x, int y)
{
    if(!InRange(x, y)) return false;
    if(visited[x][y] || arr[x][y] == 1) return false;
    return true;
}

void BFS()
{
    int dx[4] = {0,0,1,-1};
    int dy[4] = {1,-1,0,0};
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i = 0; i<4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(Cango(nx, ny)) {
                q.push(make_pair(nx,ny));
                visited[nx][ny] = true;
            }
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> k;
    int r,c;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i<k; i++)
    {
        cin >> r >> c;
        q.push(make_pair(r-1,c-1));
        visited[r-1][c-1] = true;
    }
    BFS();
    int result = 0;
    for(int i = 0; i<101; i++)
    {
        for(int j = 0; j<101; j++)
        {
            if(visited[i][j] == 1)
            {
                result++;
            }
        }
    }
    cout << result;
    return 0;
}