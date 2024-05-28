#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int solution(vector<int> v, int k)
{
    if(v[k] == 1) return 0;
    v[k] = 1;
    int max = 0;
    vector<int> v2;
    vector<int> v3;
    for(int i = 0; i<v.size(); i++)
    {
        if(v[i] == 1) v2.push_back(i);
    }
    for(int i = 0; i<v2.size()-1; i++)
    {
        v3.push_back(v2[i+1] - v2[i]);
    }
    int num =  *min_element(v3.begin(), v3.end());
    return num;
    
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    vector<int> v;
    string s;
    cin >> s;
    for(int i = 0; i<n; i++)
    {
        v.push_back(s[i] - '0');
    }
    int max = 0;
    for(int i = 0; i<n; i++)
    {
        if(max < solution(v, i))
        {
            max = solution(v, i);
        }
    }
    cout << max;


    return 0;
}