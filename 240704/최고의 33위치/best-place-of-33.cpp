#include <iostream>
#include <vector>
using namespace std;


int getNum(int row, int col, vector<vector<int>> v)
{
    int num = 0;
    for(int i = row; i<=row+2; i++)
    {
        for(int j = col; j<=col+2; j++)
        {
            if(v[i][j] == 1)
            {
                num++;
            }
        }
    }
    return num;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int result;
    vector<vector<int>> v(n, vector<int>(n, 0));
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cin >> v[i][j];
        }
    }
    int max = 0;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(i+2 >= n || j+2 >= n) 
            {
                result = 0;
            }
            else
            {
                result = getNum(i, j, v);
                if(result > max) max = result;
            }
        }
    }
    cout << max;

    return 0;
}