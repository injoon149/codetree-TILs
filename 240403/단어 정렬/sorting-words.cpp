#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    vector<string> v(n, " ");
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for(int i = 0; i<n; i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}