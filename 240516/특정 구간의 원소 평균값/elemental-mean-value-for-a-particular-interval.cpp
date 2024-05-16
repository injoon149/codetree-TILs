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
            int avg = 0;
            sum_cnt = 0;
            for(int k = i; k<=j; k++)
            {

                avg += v[k];
                sum_cnt++;
            }
            avg = avg / sum_cnt;
            avgsum = avg % sum_cnt;
            for(int k = i; k<=j; k++)
            {
                if(avg == v[k] && avgsum == 0) {
                    cnt++;
                    break;
                }
            }
        }
    }
    cout << cnt+1;
    return 0;
}