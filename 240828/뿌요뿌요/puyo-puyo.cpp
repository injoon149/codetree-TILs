#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool visited[101][101] = {false, };
int arr[101][101] = {0, };
int n;
int counter = 0;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

bool InRange(int x, int y)
{
    return (0<=x && x < n && 0<=y && y < n);
}

bool CanGo(int x, int y)
{
    return (InRange(x,y) && !visited[x][y]);
}

void dfs(int x, int y)
{
    visited[x][y] = true;
    counter++;
    for(int i = 0; i<4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(CanGo(nx, ny) && arr[x][y] == arr[nx][ny] && !visited[nx][ny])
        {
            dfs(nx, ny);
        }
    }    
}



int main() {
    // 여기에 코드를 작성해주세요.
    
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cin >> arr[i][j];
        }
    }
    vector<int> result;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(!visited[i][j])
            {
                counter = 0;
                dfs(i, j);
                result.push_back(counter);
            }
        }
    }
    int cnt = 0;
    for(int i = 0; i<result.size(); i++)
    {
        if(result[i] >= 4)
        {
            cnt++;
        }
    }
    cout << cnt <<" " << *max_element(result.begin(), result.end());


    return 0;
}