#include <iostream>
using namespace std;

int timeString(int m, int d)
{
    int month = 1, day = 1;
    int elapsed_days = 0;
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while(true){
        if(month == m && day == d) break;
        elapsed_days++;
        day++;
        if(day > num_of_days[month]){
            month++;
            day = 1;
        }
    }
    return elapsed_days;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    cout << abs(timeString(m2, d2) - timeString(m1, d1))+1;
    return 0;
}