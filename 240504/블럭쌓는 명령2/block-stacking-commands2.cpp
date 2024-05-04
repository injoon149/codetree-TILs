#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k, ai, bi;
    cin >> n >> k;
    vector<int> v(n, 0);
    for(int i = 1; i<= k; i++)
    {
        cin >> ai >> bi;
        for(int j = ai; j<= bi; j++)
        {
            v[j] += 1;
        }
    }
    int max = *max_element(v.begin(), v.end());
    cout << max;

    return 0;
}