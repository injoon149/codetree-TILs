#include <iostream>
using namespace std;

bool solution(int year)
{
    if(year %4 == 0) {
        if(year % 100 == 0 && year % 400 != 0)
        {
            return false;
        }
        else return true;
    }
    return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int year;
    cin >> year;
    if(solution(year) == 1) cout << "true";
    else cout << "false";

    return 0;
}