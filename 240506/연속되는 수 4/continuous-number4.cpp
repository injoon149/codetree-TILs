#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, num;
    cin >> n;
    vector<int> v;
    int cnt = 0;
    int max = 0;
    for(int i = 0; i<n; i++)
    {
        cin >> num;
        v.push_back(num);
    }
    for(int i = 0; i<n; i++)
    {
        if(i == 0 || v[i] <= v[i-1])
        {
            cnt = 1;
        }
        else if(v[i] > v[i-1])
        {
            cnt++;
        }
        if(cnt > max) max = cnt;
    }
    cout << max;
    return 0;

}