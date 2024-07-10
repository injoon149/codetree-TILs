#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;
    cin >> n >> k;
    int num;
    vector<int> v;
    for(int i = 0; i<n; i++)
    {
        cin >> num;
        v.push_back(num);
    }
    int max = 0;
    vector<int> v2(1000001, 0);
    for(int i = 0; i<n-1; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(v[i] == v[j])
            {
                if(j-i <= k)
                {
                    v2[v[i]]++;
                }
            }
        }
    }
    int result = 0;
    for(int i = v2.size()-1; i>=0; i--)
    {
        if(max < v2[i])
        {
            max = v2[i];
            result = i;
        }
    }
    if(max == 0) cout << max;
    else cout << result;
    return 0;
}