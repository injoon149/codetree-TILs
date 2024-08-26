#include <iostream>
#include <vector>
#include <algorithm>
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
    int currentSum = v[0];
    int maxSum = v[0];

    //합이 0보다 작아지면 현재 합을 v[i]로 바꿔버린다
    for(int i = 1; i<n; i++)
    {
        if(currentSum + v[i] < 0)
        {
            currentSum = 0;
            continue;
        }
        else currentSum = currentSum + v[i];
        maxSum = max(maxSum, currentSum);
    }
    cout << maxSum;


    return 0;
}