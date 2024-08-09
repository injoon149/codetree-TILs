#include <iostream>
#include <queue>
using namespace std;

int n, m;
priority_queue<int> pq;

int main() {
    cin >> n >> m;
    int num;
    for(int i = 0; i<n; i++){
        cin >> num;
        pq.push(num);
    }

    while(m--)
    {
        int max_val = pq.top();
        pq.pop();
        pq.push(max_val - 1);
    }
    cout << pq.top();
    return 0;
}