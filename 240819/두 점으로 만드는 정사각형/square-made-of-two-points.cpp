#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int x1, y1, x2, y2;
    vector<int> vx;
    vector<int> vy;
    cin >> x1 >> y1 >> x2 >> y2;
    vx.push_back(x1);
    vx.push_back(x2);
    vy.push_back(y1);
    vy.push_back(y2);
    cin >> x1 >> y1 >> x2 >> y2;
    vx.push_back(x1);
    vx.push_back(x2);
    vy.push_back(y1);
    vy.push_back(y2);
    sort(vx.begin(), vx.end());
    sort(vy.begin(), vy.end());
    int garo, saro;
    garo = vx[3] - vx[0];
    saro = vy[3] - vy[0];
    if(garo >= saro){
        cout << garo * garo;
    }
    else cout << saro * saro;
    return 0;
}