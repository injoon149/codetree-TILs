#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int x, y;
    cin >> x >> y;
    vector<int> v;
    for(int i = x; i<=y; i++)
    {
        int a = i / 10000;
        int b = (i/1000) % 10;
        int c = (i/100)%10;
        int d = (i/10)%10;
        int e = i % 10;
        v.push_back(a+b+c+d+e);
    }
    cout << *max_element(v.begin(), v.end());

    return 0;
}