#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n, 0);
    int cnt = 0;
    int max = 0;
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }
    for(int i = 0; i<n; i++)
    {
        if(i == 0 || v[i] * v[i-1] < 0)
        {
            cnt = 1;
        }
        else if(v[i] * v[i-1] > 0)
        {
            cnt++;
        }
        if(cnt > max) max = cnt;
    } 
    cout << max;
    return 0;
}