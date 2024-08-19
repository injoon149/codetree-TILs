#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    vector<int> v(15,0);
    int a,b,c,d;
    for(int i = 0; i<15; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    a = v[0];
    b = v[1];
    c = v[2];
    d = v[14] - v[0] - v[1] - v[2];
    cout << a <<" "<<b<<" "<<c<<" "<<d;
    return 0;
}