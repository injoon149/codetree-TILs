#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, s;
    cin >> n >> s;
    vector<int> v(n, 0);
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }
    int min = INT_MAX;
    int sum = 0;
    int sum2 = 0;
    int answer = 0;
    for(int i = 0; i<n; i++)
    {
        sum += v[i];
    }
    for(int i = 0; i<n-1; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            sum2 += v[i];
            sum2 += v[j];
            int sum3 = sum;
            sum3 -= sum2;
            if(min > abs(sum3 - s)) 
            {
                min = abs(sum3 - s);
            }
            sum2 = 0;
            
        }
    }
    cout << min;
    return 0;

}