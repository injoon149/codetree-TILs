#include <iostream>
using namespace std;

int timeString(int d, int t, int m)
{
    int time = 11, min = 11, day = 11;
    int elapsed_time = 0;
    while(true)
    {
        if(time == t && min == m && day == d) break;
        min++;
        elapsed_time++;
        if(min == 60) {
            time++;
            min = 0;
        }
        if(time == 24)
        {
            day++;
            time = 0;
        }
    }
    return elapsed_time;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    cin >> a >> b >> c;
    if(a<11) {
        cout <<"-1";
        return 0;
    }
    else if(a == 11){
        if(b < 11){
            cout <<"-1";
            return 0;
        }
        else if(b == 11) {
            if(c < 11) {
                cout <<"-1";
                return 0;
            }
            else cout << timeString(a,b,c);
        }
        else cout << timeString(a,b,c);
    }
    else cout << timeString(a,b,c);

    return 0;
}