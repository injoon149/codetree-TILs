#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,x,y;
    cin >> a >> b >> x >> y;
    int start = a;
    int first_num = 0;
    first_num += abs(a - x);
    first_num += abs(b - y);

    int second_num = 0;
    second_num += abs(a - y);
    second_num += abs(b - x);

    int third_num = 0;
    third_num += abs(b-a);

    int min_num = min(first_num, second_num);
    min_num = min(min_num, third_num);
    cout << min_num;
    return 0;
}