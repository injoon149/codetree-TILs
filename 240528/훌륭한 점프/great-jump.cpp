#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int n, k;

bool IsPossible(int max_val, vector<int> v)
{
    vector<int> v2;
    v2.push_back(1);

    for(int i = 1; i<n; i++)
    {
        if(v[i] <= max_val)
        {
            v2.push_back(i);
        }
    }
    for(int i = 1; i<v2.size(); i++)
    {
        int dist = v2[i] - v2[i-1];
        if(dist > k) return false;
    }
    return true;
}

int main() {
    // 여기에 코드를 작성해주세요.
    
    cin >> n >> k;
    vector<int> v(n, 0);
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }
    int max = INT_MAX;
    for(int i = 0; i<n; i++)
    {
        if(IsPossible(v[i], v))
        {
            if(max > v[i])
            {
                max = v[i];
            }
        }
    }
    cout << max;

    return 0;
}