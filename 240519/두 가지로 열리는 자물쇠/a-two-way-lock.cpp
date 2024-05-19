#include <iostream>
using namespace std;

int n;
int a,b,c;
int a2,b2,c2;

int main(){
    cin >> n;
    cin >> a >> b >> c;
    cin >> a2 >> b2 >> c2;

    int cnt = 0;
    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=n; j++)
        {
            for(int k = 1; k<=n; k++)
            {
                if((abs(a-i)<=2 || abs(a-i)>=n-2) && (abs(b-j)<=2 || abs(b-j)>=n-2) 
                && (abs(c-k) <=2 || abs(c-k)>=n-2))
                {
                    cnt++;
                }
                else if((abs(a2-i)<=2 || abs(a2-i)>=n-2) && (abs(b2-j)<=2 || abs(b2-j)>=n-2)
                && (abs(c2-k)<=2 || abs(c2-k)>=n-2))
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}