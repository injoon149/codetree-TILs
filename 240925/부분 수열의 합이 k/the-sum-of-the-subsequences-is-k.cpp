#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,k;
    cin >> n >> k;
    vector<int> v(n+1, 0);
    v[0] = 0;
    int num;
    for(int i = 1; i<=n; i++)
    {
        cin >> num;
        v[i] = v[i-1] + num;
    }
    int cnt = 0;
    for(int i = 1; i<=n; i++)
    {
        for(int j = 0; j<i; j++)
        {
            if(v[i] - v[j] == k)
            {
                cnt++;
            }
        }
    }
    cout << cnt;


    return 0;
}