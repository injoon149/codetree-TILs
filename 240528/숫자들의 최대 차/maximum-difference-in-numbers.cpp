#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;
    cin >> n >> k;
    vector<int> v(n, 0);
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }
    int max = 0;
    for(int i = 0; i<n; i++)
    {
        int min = v[i];
        int num = 0;
        for(int j = 0; j<n; j++)
        {
            if(min <= v[j] && v[j] <= min+k)
            {
                num++;
            }
        }
        if(max < num) max = num;
    }
    cout << max;

    return 0;
}