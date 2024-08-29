#include <iostream>
#include <vector>
#include <queue>
using namespace std;

queue<pair<int,int>> q;
int n;
int step[101][101];
bool visited[101][101] = {false, };
int arr[101][101] = {0, };
int dx[8] = {-2, -1, 1, 2, -2, -1, 1, 2};
int dy[8] = {-1, -2, -2, -1, 1, 2, 2, 1};

bool InRange(int x, int y)
{
    return (0<=x && x<n && 0<=y && y<n);
}

void push(int x, int y, int s)
{
    step[x][y] = s;
    visited[x][y] = true;
    q.push(make_pair(x,y));
}

void BFS() {
    while(!q.empty())
    {
        pair<int,int> curr_pos = q.front();
        q.pop();
        int x = curr_pos.first;
        int y = curr_pos.second;
        for(int i = 0; i<8; i++)
        {
            int new_x = x + dx[i];
            int new_y = y + dy[i];
            if(InRange(new_x, new_y) && !visited[new_x][new_y])
            {
                push(new_x, new_y, step[x][y] + 1);
            }
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    int r1,c1,r2,c2;
    cin >> r1 >> c1 >> r2 >> c2;
    push(r1-1, c1-1, 0);
    BFS();
    if(step[r2-1][c2-1] == 0) cout <<"-1";
    else cout << step[r2-1][c2-1];
    return 0;
}