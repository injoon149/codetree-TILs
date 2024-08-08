#include <iostream>
#include <vector>
using namespace std;

int n, m;
int answer[101][101];
bool visited[101][101];
int result = 0;
int dx[2] = {1, 0};
int dy[2] = {0, 1};

bool InRange(int x, int y, int n, int m) {
    return 0 <= x && x < n && 0 <= y && y <n;
}

bool CanGo(int x, int y, int n, int m) {
    if(!InRange(x, y, n, m)) return false;
    if(visited[x][y] || answer[x][y] == 0) return false;
    return true;
}

void DFS(int x, int y, int n, int m) {

    if(x == (n-1) && y == (m-1))
    {
        result = 1;
        return;
    }
    
    for(int i = 0; i<2; i++)
    {
        int new_x = x + dx[i];
        int new_y = y + dy[i];
        if(CanGo(new_x, new_y, n, m))
        {
            DFS(new_x, new_y, n, m);
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
            cin >> answer[i][j];
        }
    }
    DFS(0,0,n, m);
    cout << result;


    return 0;
}