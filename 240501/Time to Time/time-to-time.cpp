#include <iostream>
using namespace std;

int timeCal(int a, int b)
{
    int hour = 0, min = 0;
    int elapsed_time = 0;

    while(true) {
        if(hour == a && min == b) break;
        elapsed_time++;
        min++;
        if(min == 60) {
            hour++;
            min = 0;
        }
    }
    return elapsed_time;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << timeCal(c, d) - timeCal(a,b);
    return 0;
}