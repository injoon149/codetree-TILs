#include <iostream>
#include <vector>
using namespace std;

int n;

bool InRange(int a)
{
    if(0 <= a && a < n)
    {
        return true;
    }
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int r,c;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n, 0));
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cin >> v[i][j];
        }
    }
    cin >> r >> c;
    int num = v[r-1][c-1];
    for(int i = r-num; i<= r; i++)
    {
        if(InRange(i))
        {
            v[i][c-1] = 0;
        }
    }
    for(int i = c - num; i<=c; i++)
    {
        if(InRange(i))
        {
            v[r-1][i] = 0;
        }
    }

    for(int i = 0; i<n; i++)
    {
        vector<int> v2;
        for(int j = n-1; j >=0; j--)
        {
            if(v[j][i] != 0)
            {
                v2.push_back(v[j][i]);
            }
            
        }
        for(int j = n-1; j >=0; j--)
        {
            v[j][i] = 0;
        }
        for(int j = v2.size()-1; j<n; j++)
        {
            v2.push_back(0);
        }
        for(int j = n-1; j>=0; j--)
        {
            v[j][i] = v2[n-1-j];
        }
    }
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}