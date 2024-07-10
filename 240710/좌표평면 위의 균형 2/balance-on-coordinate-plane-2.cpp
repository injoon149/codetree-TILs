#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int calculate(int a, int b, vector<vector<int>> v)
{
    int a1 = 0, a2 = 0, a3 = 0, a4 = 0;
    for(int i = 0; i<a; i++)
    {
        for(int j = b; j<101; j++)
        {
            if(v[i][j] == 1) a1++;
        }
    }
    for(int i = a; i<101; i++)
    {
        for(int j = b; j<101; j++)
        {
            if(v[i][j] == 1) a2++;
        }
    }
    for(int i = 0; i<a; i++)
    {
        for(int j = 0; j<b; j++)
        {
            if(v[i][j] ==1) a3++;
        }
    }
    for(int i = a; i<101; i++)
    {
        for(int j = 0; j<b; j++)
        {
            if(v[i][j] == 1) a4++;
        }
    }
    a1 = max(a1, a2);
    a1 = max(a1, a3);
    a1 = max(a1, a4);
    return a1;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int min_num = 10000000;
    vector<vector<int>> v(101, vector<int>(101, 0));
    int x, y;
    for(int i = 0; i<n; i++)
    {
        cin >> x >> y;
        v[x][y] = 1;
    }
    for(int i = 0; i<101; i++)
    {
        for(int j = 0; j<101; j++)
        {
            if(i %2 == 0 && j%2 == 0)
            {
                int num = calculate(i, j, v);
                min_num = min(min_num, num); 
            }
        }
    }
    cout << min_num;
    return 0;
}