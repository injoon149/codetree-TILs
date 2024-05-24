#include <iostream>
#include <algorithm>
using namespace std;

int x, y;

int main()
{
    cin >> x >> y;
    int ans = 0;

    for(int i = x; i<=y; i++)
    {
        int num = i;
        int digit[10] = {};
        int all_digits = 0;
        while(num) {
            digit[num%10] ++;
            all_digits++;
            num /= 10;
        }

        bool interesting = false;

        for(int j = 0; j<10; j++)
        {
            if(digit[j] == all_digits-1) interesting = true;
        }
        if(interesting) ans++;
    }
    cout << ans;
    return 0;
}