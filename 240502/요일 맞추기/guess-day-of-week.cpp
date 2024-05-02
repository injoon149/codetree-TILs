#include <iostream>
#include <string>
using namespace std;

void timeString1(int m1, int d1, int m2, int d2)
{
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string strings[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    string s = strings[1];
    int i = 1;
    while(true){
        if(m1 == m2 && d1 == d2) break;
        i++;
        d1++;
        s = strings[i%7];
        if(d1 > num_of_days[m1]){
            m1++;
            d1 = 1;
        }
    }
    cout << s;
}

void timeString2(int m1, int d1, int m2, int d2)
{
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string strings[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    string s;
    int i = 1;
    while(true){
        if(m1 == m2 && d1 == d2) break;
        if(i == 0) i = 6;
        else i--;
        d1--;
        s = strings[i];
        if(d1 <0){
            m1--;
            d1 = num_of_days[m1];
        }
    }
    cout << s;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    if(m2 > m1) timeString1(m1, d1, m2, d2);
    else if(m2 == m1){
        if(d2 > d1) timeString1(m1, d1, m2, d2);
        else if(d2 == d1) cout << "Mon";
        else timeString2(m1, d1, m2, d2);
    }
    else timeString2(m1, d1, m2, d2);
    return 0;
}