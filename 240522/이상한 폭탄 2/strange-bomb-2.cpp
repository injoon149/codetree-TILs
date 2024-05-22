#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;
    cin >> n >> k;
    vector<int> v(n, 0);
    vector<int> answer;
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }
    for(int i = 0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(j-i <= 3 && v[j] == v[i])
            {
                answer.push_back(v[j]);
            }
        }
    }
    cout << *max_element(answer.begin(), answer.end());

    return 0;
}