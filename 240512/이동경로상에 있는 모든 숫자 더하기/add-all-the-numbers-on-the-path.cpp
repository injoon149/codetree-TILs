#include <iostream>
#include <vector>
#include <string>
using namespace std;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

bool InRange(int x, int y, int n)
{
    return (0 <= x && x < n && 0 <= y && y < n);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    vector<vector<int>> v(n, vector<int>(n, 0));
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cin >> v[i][j];
        }
    }
    int x = n/2;
    int y = n/2;
    int dir_num = 0;
    int cnt = v[x][y];
    for(int i = 0; i<s.size(); i++)
    {
        if(s[i] == 'L')
        {
            dir_num = (dir_num+1) % 4;
        }
        else if(s[i] == 'R')
        {
            if(dir_num == 0) dir_num = 3;
            else dir_num = dir_num - 1;
        }
        else
        {
            if(InRange(x + dx[dir_num], y + dy[dir_num], n))
            {
                x += dx[dir_num];
                y += dy[dir_num];
                cnt += v[x][y];
            }
        }
    }
    cout << cnt;


    return 0;
}