#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int cnt = 0;
    while(1)
    {
        if(n == 0)
        {
            cout << cnt;
            return 0;
        }
        else if(n == 1)
        {
            cout << "-1";
            return 0;
        }
        else if(n % 5 == 0)
        {
            cnt  += (n / 5);
            cout << cnt;
            return 0;
        }
        else
        {
            n = n - 2;
            cnt++;
        }
    }
    return 0;
}