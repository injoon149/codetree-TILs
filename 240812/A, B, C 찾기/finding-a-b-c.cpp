#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    vector<int> v(7, 0);
    for(int i = 0; i<7; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int a,b,c;
    a = v[0];
    b = v[1];
    c = v[6] - v[0] - v[1];
    cout << a << " "<<b<<" "<<c;
    return 0;
}