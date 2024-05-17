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

    for(int i = 0; i<n; i++)
    {
        cin >> candy >> basket;
        v[basket] += candy;
    }
    for(int i = 0; i<101; i++)
    {
        cnt = 0;
        for(int j = i-k; j<=i+k; j++)
        {
            if(i-k <0) cnt += 0;
            else cnt += v[j];
        }
        if(max < cnt) max = cnt;
    }
    
    cout << max;
    return 0;
    
}