#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

vector<int> v(5, 0);

int getDiff(int i, int j, int k, int w)
{
    int sum1 = v[i] + v[j];
    int sum2 = v[k] + v[w];
    int sum3 = 0;

    for(int i = 0; i<5; i++)
    {
        sum3 += v[i];
    }
    sum3 -= (sum1 + sum2);

    if(sum1 == sum2 || sum2 == sum3 || sum1 == sum3) return -1;

    int res = abs(sum1 - sum2);
    res = max(res, abs(sum1 - sum3));
    res = max(res, abs(sum2 - sum3));

    return res;
}

int main() {
    // 여기에 코드를 작성해주세요.
    
    for(int i = 0; i<5; i++)
    {
        cin >> v[i];
    }
    int min = INT_MAX;
    bool flag = true;
    for(int i = 0; i<5; i++)
    {
        for(int j = i+1; j<5; j++)
        {
            for(int k = 0; k<5; k++)
            {
                for(int w = k+1; w<5; w++)
                {
                    if(i ==k || i==w || j ==k || j==w) continue;
                    if(getDiff(i,j,k,w) != -1){
                        min = (min, getDiff(i,j,k,w));
                        flag = false;
                    }
                }
            }
        }
    }
    if(flag) cout << -1;
    else cout << min;
    return 0;
}