#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, x1, x2;
    cin >> n;
    vector<int> v(201, 0);
    for(int i = 0; i<n; i++)
    {
        cin >> x1 >> x2;
        for(int j = x1+100; j<=x2+99; j++)
        {
            v[j] +=1;
        }
    }
    cout << *max_element(v.begin(), v.end());
    return 0;
}