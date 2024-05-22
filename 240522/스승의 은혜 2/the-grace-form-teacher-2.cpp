#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> v, int i, int b)
{
    v[i] = v[i] / 2;
    sort(v.begin(), v.end());
    int cnt = 0;
    for(int j = 0; j<v.size(); j++)
    {
        if(b >= v[j]) 
        {
            b -= v[j];
            cnt++;
        }
        else break;
    }
    return cnt;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, b;
    cin >> n >> b;
    vector<int> v(n, 0);
    int cnt = 0;
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }
    int max_num = 0;
    for(int i = 0; i<n; i++)
    {
        max_num = max(max_num, solution(v, i, b));
    }
    cout << max_num;
    return 0;
}