#include <iostream>
#include <tuple>
#include <queue>
using namespace std;

#define MAX_N 100
#define DIR_NUM 4
#define NOT_EXISTS make_pair(-1,-1)

int n, k;
bool visited[101][101] = {false, };
int grid[101][101] = {0, };

pair<int,int> curr_cell;
queue<pair<int,int>> bfs_q;

bool InRange(int x, int y)
{
    return (0<=x && x<n && 0<=y && y<n);
}

bool CanGo(int x, int y, int target_num) {
    return InRange(x, y) && !visited[x][y] && grid[x][y] < target_num;
}

void InitializeVisited() {
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            visited[i][j] = false;
        }
    }
}

void BFS() {
    int dx[4] = {0,0,1,-1};
    int dy[4] = {1,-1,0,0};

    int curr_x, curr_y;
    tie(curr_x, curr_y) = curr_cell;
    visited[curr_x][curr_y] = true;
    bfs_q.push(curr_cell);

    int target_num = grid[curr_x][curr_y];

    while(!bfs_q.empty()) {
        pair<int,int> curr_pos = bfs_q.front();
        int curr_x, curr_y;
        tie(curr_x, curr_y) = curr_pos;
        bfs_q.pop();

        for(int i = 0; i<DIR_NUM; i++)
        {
            int new_x = curr_x + dx[i];
            int new_y = curr_y + dy[i];

            if(CanGo(new_x, new_y, target_num)) {
                bfs_q.push(make_pair(new_x, new_y));
                visited[new_x][new_y] = true;
            }
        }
    }
}

bool NeedUpdate(pair<int,int> best_pos, pair<int,int> new_pos)
{
    if(best_pos == NOT_EXISTS) return true;
    int best_x, best_y;
    tie(best_x, best_y) = best_pos;

    int new_x, new_y;
    tie(new_x, new_y) = new_pos;

    return make_tuple(grid[new_x][new_y], -new_x, -new_y) > 
            make_tuple(grid[best_x][best_y], -best_x, -best_y);
}

bool Move() {
    InitializeVisited();
    BFS();

    pair<int,int> best_pos = NOT_EXISTS;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(!visited[i][j] || make_pair(i,j) == curr_cell) continue;
            pair<int,int> new_pos = make_pair(i, j);
            if(NeedUpdate(best_pos, new_pos)) best_pos = new_pos;
        }
    }
    if(best_pos == NOT_EXISTS) return false;
    else {
        curr_cell = best_pos;
        return true;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> k;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cin >> grid[i][j];
        }
    }
    int r,c;
    cin >> r >> c;
    curr_cell = make_pair(r-1, c-1);
    while(k--) {
        bool is_moved = Move();
        if(!is_moved) break;
    }
    int final_x, final_y;
    tie(final_x, final_y) = curr_cell;
    cout << final_x + 1 <<" "<< final_y+1;
    

    return 0;
}