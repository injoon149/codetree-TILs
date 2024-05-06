#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int n, m, t;
    char d;
    cin >> n >> m;
    vector<int> v1;
    vector<int> v2;
    int location = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> d >> t;
        if (d == 'R')
        {
            for (int j = 1; j <= t; j++)
            {
                v1.push_back(location + j);
            }
            location += t;
        }
        else
        {
            for (int j = 1; j <= t; j++)
            {
                v1.push_back(location - j);
            }
            location -= t;
            
        }
    }
    location = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> d >> t;
        if (d == 'R')
        {
            for (int j = 1; j <= t; j++)
            {
                v2.push_back(location + j);
            }
            location += t;
        }
        else
        {
            for (int j = 1; j <= t; j++)
            {
                v2.push_back(location - j);
            }
            location -= t;
        }
    }
    int cnt = 0;
    for (int i = 0; i < v1.size(); i++)
    {
        if (v1[i] == v2[i]) {
            cnt = i + 1;
            break;
        }
    } 
    cout << cnt;
    return 0;
}