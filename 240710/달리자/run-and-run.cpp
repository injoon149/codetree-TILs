#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    vector<int> v1(n, 0);
    vector<int> v2(n, 0);
    int ans = 0;
    for(int i = 0; i<n; i++)
    {
        cin >> v1[i] ;
    }
    for(int i = 0; i<n; i++)
    {
        cin >> v2[i];
    }

    for(int i = 0; i<n; i++)
    {
        if(v1[i] > v2[i]) {
            int num = v1[i] - v2[i];
            v1[i] -= num;
            v1[i+1] += num;
            ans += num;
        }
    }
    cout << ans;

    return 0;
}