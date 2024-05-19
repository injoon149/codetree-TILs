#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>
using namespace std;

vector<int> v(6, 0);

int GetDiff(int a, int b, int c)
{
    int sum1 = v[a] + v[b] + v[c];
    int sum2 = 0;
    for(int k = 0; k<6; k++)
    {
        sum2 += v[k];
    }
    sum2 -= sum1;
    return abs(sum1 - sum2);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int sum = 0;
    for(int i = 0; i<6; i++)
    {
        cin >> v[i];
    }
    int min_diff = INT_MAX;
    for(int i = 0; i<6; i++)
    {
        for(int j = i+1; j<6; j++)
        {
            for(int k = i+2; k<6; k++)
            {
                min_diff = min(min_diff, GetDiff(i,j,k));
            }
        }
    }
    cout << min_diff;
    return 0;
}