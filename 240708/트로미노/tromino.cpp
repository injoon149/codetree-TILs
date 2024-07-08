#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, m;

bool InRange(int a, int b)
{
    if(0 <= a && a < n)
    {
        if(0 <= b && b < n)
        {
            return true;
        }
    }
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m, 0));
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            cin >> v[i][j];
        }
    }
    int max = 0;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            int tmp = 0;
            if(InRange(i, j) && InRange(i+1, j) && InRange(i+1, j-1))
            {
                tmp += v[i][j];
                tmp += v[i+1][j];
                tmp += v[i+1][j-1];
            }
            if(max < tmp) max = tmp;
        }
    }
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            int tmp = 0;
            if(InRange(i, j) && InRange(i, j+1) && InRange(i+1, j+1))
            {
                tmp += v[i][j];
                tmp += v[i][j+1];
                tmp += v[i+1][j+1];
            }
            if(max < tmp) max = tmp;
        }
    }
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            int tmp = 0;
            if(InRange(i, j) && InRange(i+1, j) && InRange(i+1, j+1))
            {
                tmp += v[i][j];
                tmp += v[i+1][j];
                tmp += v[i+1][j+1];
            }
            if(max < tmp) max = tmp;
        }
    }
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            int tmp = 0;
            if(InRange(i, j) && InRange(i+1, j) && InRange(i, j+1))
            {
                tmp += v[i][j];
                tmp += v[i+1][j];
                tmp += v[i][j+1];
            }
            if(max < tmp) max = tmp;
        }
    }
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            int tmp = 0;
            if(InRange(i, j) && InRange(i+1, j) && InRange(i+2, j))
            {
                tmp += v[i][j];
                tmp += v[i+1][j];
                tmp += v[i+2][j];
            }
            if(max < tmp) max = tmp;
        }
    }
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
            int tmp = 0;
            if(InRange(i, j) && InRange(i, j+1) && InRange(i, j+2))
            {
                tmp += v[i][j];
                tmp += v[i][j+1];
                tmp += v[i][j+2];
            }
            if(max < tmp) max = tmp;
        }
    }
    cout << max;


    return 0;
}