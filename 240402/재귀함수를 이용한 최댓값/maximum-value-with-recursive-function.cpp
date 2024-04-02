#include <iostream>
#include <vector>
using namespace std;

int printNum(int n, vector<int> v)
{
    if(n == 1) return v[0];
    if(v[n-1] >= v[n-2]) {
        v[n-2] = v[n-1];
    }
    return printNum(--n, v);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }
    cout << printNum(n, v);
    return 0;
}