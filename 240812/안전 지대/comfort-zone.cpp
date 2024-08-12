#include <iostream>
#include <vector>
using namespace std;

int n, m;
int k = 0;

int village[51][51];
bool visited[51][51] = {false, };
int cnt = 0;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,-1,0,1};

bool InRange(int x, int y)
{
    return (0 <=x && x < n && 0 <= y && y < n);
}

bool CanGo(int x, int y, int k)
{
    if(!InRange(x, y)) return false;
    if(visited[x][y] || village[x][y] < k) return false;
    return true;
}

void dfs(int x, int y) {
    
}



int main() {
    cin >> n >> m;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            cin >> village[i][j];
        }
    }


    // 여기에 코드를 작성해주세요.
    return 0;
}