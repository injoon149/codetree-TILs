#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int n,k,m;
int arr[101][101] = {0, };
bool visited[101][101] = {false, };
int dx[4] = {0, 1, 0, -1}; // 상하좌우 이동
int dy[4] = {1, 0, -1, 0};
vector<pair<int, int>> stones;
vector<pair<int, int>> starts;

bool InRange(int x, int y)
{
    return (0<=x && x<n && 0<=y && y<n);
}

bool Cango(int x, int y)
{
    if(!InRange(x, y)) return false;
    else if(arr[x][y] == 1) return false;
    else return true;
}

void Initialize()
{
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            visited[i][j] = false;
        }
    }
}

int BFS()
{
    queue<pair<int,int>> q;
    int cnt = 0;

    for(auto start : starts)
    {
        q.push(start);
        visited[start.first][start.second] = true;
    }

    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        cnt++;

        for(int i = 0; i<4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(Cango(nx,ny) && visited[nx][ny] == false) {
                q.push(make_pair(nx,ny));
                visited[nx][ny] = true;
                
            } 
        }
    }
    return cnt;

}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> k >> m;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cin >> arr[i][j];
            if(arr[i][j] == 1){
                stones.push_back({i,j});
            }
        }
    }
    int r,c;
    for(int i = 0; i<k; i++)
    {
        cin >> r >> c;
        starts.push_back({r-1,c-1});
    }
    int max_reachable = 0;
    
    //돌을 치울 n개의 조합 선택
    vector<int> stone_indices(stones.size(), 1);
    for(int i = 0; i<m; i++)
    {
        stone_indices[i] = 0;
    }
    //돌 치울 경우의 수에 대해 BFS수행
    do{
        for(int i = 0; i<stones.size(); i++)
        {
            if(stone_indices[i] == 0)
            {
                arr[stones[i].first][stones[i].second] = 0;
            }
        }

        Initialize();
        int reachable = BFS();
        max_reachable = max(max_reachable, reachable);

        for(int i = 0; i<stones.size(); i++)
        {
            if(stone_indices[i] == 0)
            {
                arr[stones[i].first][stones[i].second] = 1;
            }
        }


    } while(next_permutation(stone_indices.begin(), stone_indices.end()));

    cout << max_reachable << endl;
    return 0;
}