#include <iostream>
#include <vector>
#include <queue>
using namespace std;

queue<pair<int,int>> q;
int step[101][101];
int arr[101][101] = {0, };
bool visited[101][101] = {false, };
int n, m;

bool InRange(int x, int y)
{
    return (0<=x && x<n && 0<=y && y<m);
}

void push(int x, int y, int s)
{
    step[x][y] = s;
    visited[x][y] = true;
    q.push(make_pair(x,y));
}

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

void BFS() {
    while(!q.empty())
    {
        pair<int,int> curr_pos = q.front();
        q.pop();
        int x = curr_pos.first;
        int y = curr_pos.second;
        for(int i = 0; i<4; i++)
        {
            int new_x = x + dx[i];
            int new_y = y + dy[i];
            if(InRange(new_x, new_y) && !visited[new_x][new_y] 
            && arr[new_x][new_y] == 1)
            {
                push(new_x, new_y, step[x][y] + 1);
            }
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            cin >> arr[i][j];
        }
    }
    push(0,0,0);
    BFS();
    if(step[n-1][m-1] == 0) cout << "-1";
    else cout << step[n-1][m-1];

    return 0;
}