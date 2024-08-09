#include <iostream>
#include <queue>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    priority_queue<int> pq;
    int x, n;
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cin >> x;
        if(x == 0)
        {
            if(pq.empty()) cout <<"0" << endl;
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