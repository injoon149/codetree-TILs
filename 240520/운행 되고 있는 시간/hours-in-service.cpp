#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v(1001, 0);

int solution(vector<int> v1, vector<int> v2, int i)
{
    int cnt = 0;
    for(int j = 0; j<1001; j++)
    {
        v[j] = 0;
    }
    auto it = v1.begin();
    it += i;
    v1.erase(it);
    auto it2 = v2.begin();
    it2 += i;
    v2.erase(it2);

    for(int j = 0; j<v1.size(); j++)
    {
        for(int k = v1[j]; k<v2[j]; k++)
        {
            v[k] = 1;
        }
    }
    for(int j = 0; j<1001; j++)
    {
        if(v[j] == 1) cnt++;
    }
    return cnt;

    
    
}

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
    int max_num = 0;
    for(int i = 0; i<n; i++)
    {
        max_num = max(max_num, solution(v1, v2, i));
    }
    cout << max_num;
    return 0;
}