#include <iostream>
#include <queue>
#include <vector>
#include <functional>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, num;
    cin >> n;
    int x1,x2,x3;
    priority_queue<int, vector<int>, greater<int>> pq;
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
            cout << x1 * x2 * x3 << endl;
            pq.push(x1);
            pq.push(x2);
            pq.push(x3);
        }
    }
    return 0;
}