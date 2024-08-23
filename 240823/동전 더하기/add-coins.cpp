#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;
    cin >>n >> k;
    vector<int> v;
    int coin;
    for(int i = 0; i<n; i++)
    {
        cin >> coin;
        v.push_back(coin);
    }
    int result = 0;
    sort(v.begin(), v.end(), greater<int>());
    while(k != 0)
    {
        for(int i = 0; i<v.size(); i++)
        {
            if(k / v[i] != 0)
            {
                result += (k / v[i]);
                k -= ((k/v[i]) * v[i]);
            }
        }
    }
    cout << result;


    return 0;
}