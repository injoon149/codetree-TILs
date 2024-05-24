#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }
    int cnt = 0;
    for(int i = 0; i<105; i++)
    {
        for(int j = 0; j<n; j++)
        {
            for(int k = j+1; k<n; k++)
            {
                if((v[k]-i) == (i-v[j])) cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}