#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    vector<int> v1(n, 0);
    vector<int> v2(n, 0);
    for(int i = 0; i<n; i++)
    {
        cin >> v1[i] >> v2[i];
    }
    int min_num  =INT_MAX;
    for(int i = 0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            int garo = (v1[j]-v1[i]) * (v1[j]-v1[i]);
            int saro = (v2[j]-v2[i]) * (v2[j]-v2[i]);
            min_num = min(min_num, garo+saro);
        }
    }
    cout << min_num;
    return 0;
}