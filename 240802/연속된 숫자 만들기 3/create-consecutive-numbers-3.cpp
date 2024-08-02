#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    cin >> a >> b >> c;
    int diff1 = abs(a - b);
    int diff2 = abs(c - b);
    cout << max(diff1, diff2) - 1;
    
    return 0;
}