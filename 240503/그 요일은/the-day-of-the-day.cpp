#include <iostream>
#include <string>
using namespace std;

int timeString(int m1, int d1, int m2, int d2, string s)
{
    int num_of_days[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string strings[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    string s2 = strings[1];
    int i = 1;
    int today = 0;
    while(true){
        if(m1 == m2 && d1 == d2) break;
        i++;
        d1++;
        s2 = strings[i%7];
        if(d1 > num_of_days[m1]){
            m1++;
            d1 = 1;
        }
        if(s2 == s) today++;
    }
    return today;
}

int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    string s;
    cin >> s;
    cout << timeString(m1, d1, m2, d2, s);
    return 0;
}