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
    int min = 0;
    for(int i = 0; i<n-2; i++)
    {
        for(int j = i+2; j<n; j++)
        {
            cnt = (v[i] + v[j]);
            if(min < cnt) min = cnt;
        }
        cnt = 0;
    }
    cout << min;
    return 0;
}