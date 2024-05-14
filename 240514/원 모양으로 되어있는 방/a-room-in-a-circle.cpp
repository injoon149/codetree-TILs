#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    vector<int> v(n, 0);
    int min = INT_MAX;
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }
    int cnt = 0;
    int num = 0;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            num = j - i;
            if(num < 0 ) num = 5+num;
            cnt = cnt + (num * v[j]);
        }
        if(min > cnt) min = cnt;
        cnt = 0;
    }
    cout << min;

    return 0;
}