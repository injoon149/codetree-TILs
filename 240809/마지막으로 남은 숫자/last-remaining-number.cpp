#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    priority_queue<int> pq;
    int n;
    int x, y;
    cin >> n;
    int num;
    for(int i = 0; i<n; i++)
    {
        cin >> num;
        pq.push(num);
    }
    while(1)
    {
        if(pq.size() >= 2)
        {
            x = pq.top();
            pq.pop();
            y = pq.top();
            pq.pop();
            if(x != y)
            {
                pq.push(abs(x-y));
            }
        }
        else if(pq.size() == 1)
        {
            cout << pq.top();
            break;
        }
        else
        {
            cout << "-1";
            break;
        }
    }

    return 0;
}