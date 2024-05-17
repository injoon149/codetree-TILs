#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(1001, 0);
    int candy, basket;
    int max = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> candy >> basket;
        v[basket] += candy;
    }
    for (int i = 0; i < 101; i++)
    {
        cnt = 0;
        if (i - k < 0)
        {
            for (int t = 0; t <= i + k; t++)
            {
                cnt += v[t];
            }
            if (max < cnt) max = cnt;
        }
        else
        {
            for (int t = i - k; t <= i + k; t++)
            {
                cnt += v[t];
            }
            if (max < cnt) max = cnt;
        }
    }

    cout << max;
    return 0;

}