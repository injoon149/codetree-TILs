#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    vector<long long> v(n, 0);
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }
    long long max_element = 0;
    for(int i = 0; i<n-1; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            max_element = max(v[j]-v[i], max_element);
        }
    }
    cout << max_element;
    return 0;
}