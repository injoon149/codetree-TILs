#include <iostream>
#include <queue>
#include <vector>
#include <functional>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, num;
    cin >> n;
    long long x1,x2,x3;
    long long result, result2;
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    for(int i = 0; i<n; i++)
    {
        cin >> num;
        pq.push(num);
        if(pq.size() < 3) cout <<"-1" <<endl;
        else
        {
            x1 = pq.top();
            pq.pop();
            x2 = pq.top();
            pq.pop();
            x3 = pq.top();
            pq.pop();
            result = x1 * x2;
            result2 = result * x3;
            cout << result2 << endl;
            pq.push(x1);
            pq.push(x2);
            pq.push(x3);
        }
    }
    return 0;
}