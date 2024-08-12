#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int move(int num, int start, vector<int> v)
{
    num += v[start-1];
    return num;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m;
    int start = 0;
    cin >> n >> m;
    vector<int> v(n, 0);
    vector<int> result;
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }
    for(int i = 1; i<=n; i++)
    {
        //i는 시작 위치
        int sum = 0;
        start = i;
        for(int j = 0; j<m; j++)
        {
            sum = move(sum, start, v);
            start = v[start-1];
        }
        result.push_back(sum);
    }
    cout <<*max_element(result.begin(), result.end());

    return 0;
}