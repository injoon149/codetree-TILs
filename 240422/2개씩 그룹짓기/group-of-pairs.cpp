#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    vector<int> v(2*n, 0);
    for(int i = 0; i<2*n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        if(sum < v[i] + v[2*n-i-1])
        {
            sum = v[i] + v[2*n-i-1];
        }
    }
    cout << sum;
    
    return 0;
}