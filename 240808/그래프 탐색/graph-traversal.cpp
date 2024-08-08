#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<int> graph[1001];
bool visited[1001];
int result = 0;
void dfs(int vertex)
{
    visited[vertex] = true;
    if(vertex != 1) result++;
    for(int i = 0; i<graph[vertex].size(); i++)
    {
        int curr_v = graph[vertex][i];
        if(visited[curr_v] == false)
        {
            dfs(curr_v);
        }
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;
    int x, y;
    for(int i = 0; i<m; i++)
    {
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    dfs(1);
    cout << result;
    return 0;
}