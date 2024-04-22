#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int k, n;
    cin >> k >> n;
    vector<int> v(k, 0);
    for(int i = 0; i<k; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    cout << v[n-1];
    return 0;
}