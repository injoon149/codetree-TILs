#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> p, vector<int> s, int i, int b)
{
    int cnt = 0;
    p[i] = p[i]/2;
    for(int i = 0; i<p.size(); i++)
    {
        p[i] += s[i];
    }
    sort(p.begin(), p.end());
    for(int i = 0; i<p.size(); i++)
    {
        if(b < p[i]) break;
        else
        {
            b -= p[i];
            cnt++;
        }
    }
    return cnt;

}

int main() {
    // 여기에 코드를 작성해주세요.
    int n, b;
    cin >> n >> b;
    vector<int> p(n, 0);
    vector<int> s(n, 0);
    vector<int> answer;
    answer.push_back(0);
    for(int i = 0; i<n; i++)
    {
        cin >> p[i] >> s[i];
    }
    for(int i = 0; i<n; i++)
    {
        int num = solution(p, s, i, b);
        answer.push_back(num);
    }
    cout << *max_element(answer.begin(), answer.end());


    return 0;
}