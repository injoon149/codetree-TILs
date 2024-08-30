#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
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
    long long min_num = INT_MAX;
    long long result = 0;
    for(int i = 0; i<n; i++)
    {
        min_num = min(min_num, v[i]);
        result = max(result, v[i] - min_num);
    }
    cout << result;
    return 0;
}