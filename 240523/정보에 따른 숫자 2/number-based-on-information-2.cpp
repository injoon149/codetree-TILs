#include <iostream>
#include <algorithm>
#include <climits>
#define MAX_T 100
using namespace std;

int t,a,b;
int s[MAX_T], n[MAX_T];
int cnt_s, cnt_n;

int main()
{
    cin >> t >> a >> b;
    for(int i = 0; i<t; i++)
    {
        char x;
        int y;
        cin >> x >> y;
        if(x == 'S') s[cnt_s++] = y;
        else n[cnt_n++] = y;
    }

    int ans = 0;
    for(int i = a; i<=b; i++)
    {
        int distance_s = INT_MAX;
        int distance_n = INT_MAX;
        for(int j = 0; j<cnt_s; j++)
        {
            distance_s = min(distance_s, abs(s[j]-i));
        }
        for(int j = 0; j<cnt_n; j++)
        {
            distance_n = min(distance_n, abs(n[j]-i));
        }
        if(distance_s <= distance_n) ans++;
    }
    cout << ans;
    return 0;
}