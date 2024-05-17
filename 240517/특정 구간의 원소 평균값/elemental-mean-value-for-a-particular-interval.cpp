#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }
    int cnt = 0;
    int sum_cnt = 0;
    int avgsum = 0;
    for(int i = 0; i<n; i++)
    {
        for(int j = i; j<n; j++)
        {
            int sum = 0;
            sum_cnt = 0;
            for(int k = i; k<=j; k++)
                sum += v[k];

            double avg = (double)sum/(j-i+1);

            bool exists = false;
            for(int k = i; k<=j; k++)
            {
                if(v[k] == avg) exists = true;
            }
            if(exists) cnt++;
        }
    }
    cout << cnt;
    
    return 0;
}