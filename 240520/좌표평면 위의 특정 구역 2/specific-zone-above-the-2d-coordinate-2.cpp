#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int solution(vector<int> v, int i)
{
    auto it = v.begin();
    it += i;
    v.erase(it);
    int max_garo = *max_element(v.begin(), v.end());
    int min_garo = *min_element(v.begin(), v.end());
    return max_garo - min_garo;

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
    int min_num = INT_MAX;
    for(int i = 0; i<n; i++)
    {
        min_num = min(min_num, solution(v1, i)*solution(v2,i));
    }
    cout <<min_num;
    
    return 0;
}