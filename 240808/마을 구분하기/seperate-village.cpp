#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int village[26][26];
bool visited[26][26] = {false, };
int dx[4] = {0,0,-1,1};
int dy[4] = {1,-1,0,0};
int cnt = 0;

bool InRange(int x, int y)
{
    return (0<=x) && (x<n) && (0<=y) && (y<n); 
}

int dfs(int x, int y) {
    for(int i = 0; i<4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(InRange(nx, ny) && village[nx][ny] == 1 && !visited[nx][ny])
        {
            visited[nx][ny] = true;
            cnt++;
            dfs(nx, ny);
        }
    }
    return cnt;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cin >> village[i][j];
        }
    }
    vector<int> answer;

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(!visited[i][j] && village[i][j] == 1) {
                visited[i][j] = true;
                cnt = 1;
                cnt = dfs(i, j);
                answer.push_back(cnt);
            }

        }
    }
    cout << answer.size() << endl;
    sort(answer.begin(), answer.end());
    for(int i = 0; i<answer.size(); i++)
    {
        cout << answer[i] << endl;
    }
    
    return 0;
}