#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

int n, m;

int village[51][51];
bool visited[51][51] = {false, };
int cnt = 0;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,-1,0,1};

bool InRange(int x, int y)
{
    return (0 <=x && x < n && 0 <= y && y < m);
}

bool CanGo(int x, int y, int k)
{
    return InRange(x, y) && !visited[x][y] && village[x][y] > k;
}


void dfs(int x, int y, int k) {
    visited[x][y] = true;
    for(int i = 0; i<4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(CanGo(nx, ny, k) && !visited[nx][ny] )
        {          
            dfs(nx, ny, k);
        }
    }    
}

struct compare {
    bool operator()(pair<int,int> a, pair<int,int> b) {
        if(a.second == b.second)
        {
            return a.first < b.first;
        }
        else return a.second > b.second;
    }
};



int main() {
    cin >> n >> m;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            cin >> village[i][j];
        }
    }
    int nx, ny;
    vector<pair<int,int>> result;
    int maxSafeArea = 0;
    
    for(int k =1; k<=100; k++)
    {
        cnt = 0;
        memset(visited, false, sizeof(visited));
        while(1)
        {
            int flag = 0;
            for(int i = 0; i<n; i++)
            {
                for(int j = 0; j<m; j++)
                {
                    if(village[i][j] > k && !visited[i][j] )
                    {
                        flag = 1;
                        nx = i;
                        ny = j;
                    }
                }
            }
            if(flag == 0) 
            {
                result.push_back(make_pair(k, cnt));
                break;
            }
            else
            {
                cnt++;
                dfs(nx, ny, k);
            }
        }
    }
    sort(result.begin(), result.end(), compare());
    cout << result[0].first <<" " << result[0].second;



    // 여기에 코드를 작성해주세요.
    return 0;
}