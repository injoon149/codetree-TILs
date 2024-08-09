#include <iostream>
#include <vector>
#include <functional>
#include <queue>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    long long x;
    cin >> n;
    priority_queue<long long, vector<long long>, greater<long long>> pq;
    for(int i = 0; i<n; i++)
    {
        cin >> x;
        if(x == 0) {
            if(pq.empty())
            {
                cout << "0" << endl;
            }
            else
            {
                cout << pq.top() << endl;
                pq.pop();
            }
        }
        else
        {
            pq.push(x);
        }
    }

    return 0;
}