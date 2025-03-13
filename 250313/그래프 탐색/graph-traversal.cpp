#include <iostream>
#include <vector>
using namespace std;
#define MAX_NUM 1000

int vertex_cnt;

vector<int> graph[MAX_NUM+1];
bool visited[MAX_NUM+1];

void dfs(int vertex)
{
    for(int i = 0; i<(int)graph[vertex].size(); i++)
    {
        if(!visited[graph[vertex][i]])
        {
            visited[graph[vertex][i]] = true;
            vertex_cnt++;
            dfs(graph[vertex][i]);
        }
    }
}

int main()
{
    int n, m;
    int x1, y1;
    cin >> n >> m;
    vector<int> v(n, 0);
    for(int i = 0; i<m; i++)
    {
        cin >> x1 >> y1;
        graph[x1].push_back(y1);
        graph[y1].push_back(x1);
    }
    visited[1] = true;
    vertex_cnt = 0;
    dfs(1);
    cout << vertex_cnt;
}