#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define MAX_NUM 25
#define DIR_NUM 4

int n;
vector<vector<int>> v(MAX_NUM, vector<int>(MAX_NUM, 0));
vector<vector<bool>> visited(MAX_NUM, vector<bool>(MAX_NUM, false));
vector<int> people_nums;
int people_num;

bool InRange(int x, int y)
{
    if(x >= 0 && x < n && y >= 0 && y < n) return true;
    else return false;
}

bool Cango(int x, int y)
{
    if(!InRange(x, y)) return false;
    else
    {
        if(visited[x][y] || v[x][y] == 0)
        {
            return false;
        }
        else return true;
    }

}

void DFS(int x, int y)
{
    int dx[4] = {1,0,-1,0};
    int dy[4] = {0,1,0,-1};

    for(int i = 0; i<4; i++)
    {
        int new_x = x + dx[i];
        int new_y = y + dy[i];

        if(Cango(new_x, new_y))
        {
            visited[new_x][new_y] = true;
            people_num++;
            DFS(new_x, new_y);
        }
    }
}

int main()
{
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cin >> v[i][j];
        }
    }

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(Cango(i,j))
            {
                visited[i][j] = true;
                people_num = 1;
                DFS(i,j);
                people_nums.push_back(people_num);
            }
        }
    }
    
    sort(people_nums.begin(), people_nums.end());
    cout << (int)people_nums.size() << endl;
    for(int i = 0; i<(int)people_nums.size(); i++)
    {
        cout << people_nums[i] << endl;
    }
    return 0;
}