#include <iostream>
#include <vector>
#include <queue>

#define MAX_N 100000
using namespace std;

int n;
int arr[MAX_N];
int sum_val;
double max_avg;
priority_queue<int> pq;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
    pq.push(-arr[n-1]);
    sum_val += arr[n-1];

    for(int i = n-2; i>=-1; i--)
    {
        pq.push(-arr[i]);
        sum_val += arr[i];

        double avg = (double)(sum_val - (-pq.top())) / (n-i-1);

        if(max_avg < avg) {
            max_avg = avg;
        }
    }

    cout << fixed;
    cout.precision(2);

    cout << max_avg;
    return 0;
}