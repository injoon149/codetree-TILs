#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int x1, x2, y1, y2, a1, a2, b1, b2;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> a1 >> b1 >> a2 >> b2;
    vector<int> v;
    v.push_back(x1);
    v.push_back(x2);
    v.push_back(a1);
    v.push_back(a2);
    vector<int> v2;
    v2.push_back(y1);
    v2.push_back(y2);
    v2.push_back(b1);
    v2.push_back(b2);
    int garo = (*max_element(v.begin(), v.end()) - *min_element(v.begin(), v.end()));
    int saro = (*max_element(v2.begin(), v2.end()) - *min_element(v2.begin(), v2.end()));
    cout << garo * saro;
    return 0;
}