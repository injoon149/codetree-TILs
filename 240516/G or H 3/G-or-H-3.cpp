#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;
    cin >> n >> k;
    int location;
    char alpha;
    int cnt = 0;
    int max = 0;
    vector<int> v(10001, 0);
    for(int i = 0; i<n; i++)
    {
        cin >> location >> alpha;
        if(alpha == 'G')
        {
            v[location] = 1;
        }
        else v[location] = 2;
    }
    for(int i = 0; i<10001-k; i++)
    {
        for(int j = i; j<=i+k; j++)
        {
            cnt += v[j];
        }
        if(max < cnt) max = cnt;
        cnt = 0;
    }
    cout << max;
    return 0;
}