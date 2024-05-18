#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    vector<int> v(6, 0);
    int sum = 0;
    for(int i = 0; i<6; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    int asum = 0;
    int bsum = 0;
    int min = INT_MAX;
    for(int i = 0; i<3; i++)
    {
        for(int j = i; j<6; j++)
        {
            asum = 0;
            for(int k = i; k<=j; k++)
            {
                asum += v[k];
            }
            bsum = sum - asum;
            if(min > abs(bsum - asum)) min = abs(bsum - asum);
        }
    }
    cout << min;
    return 0;
}