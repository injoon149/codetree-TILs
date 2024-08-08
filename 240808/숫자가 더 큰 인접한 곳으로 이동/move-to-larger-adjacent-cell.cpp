#include <iostream>
#include <vector>
using namespace std;

int n;

bool InRange(int x, int y)
{
    return 1 <= x && x <= n && 1 <= y && y <=n;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int r, c;
    cin >> n >> r >> c;
    vector<vector<int>> v(n, vector<int>(n, 0));
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cin >> v[i][j];
        }
    }
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0,0,-1,1};

    int max_num = 0;
    r = r-1;
    c = c-1;
    int max = 0;
    int startx = 0, starty = 0;
    vector<int> v2;
    v2.push_back(v[r][c]);


    for(int i = 0; i<4; i++)
    {
        if(InRange(r + dx[i], c + dy[i]))
        {
            max = v[r][c];
            if(v[r+dx[i]][c+dy[i]] > max)
            {
                startx = r + dx[i];
                starty = c + dy[i];
                v2.push_back(v[startx][starty]);
                r = startx;
                c = starty;
            }
        }
    }
    for(int i = 0; i<v2.size(); i++)
    {
        cout << v2[i] <<" ";
    }




    return 0;
}