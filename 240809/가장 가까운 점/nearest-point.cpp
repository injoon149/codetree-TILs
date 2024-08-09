#include <iostream>
#include <queue>
#include <vector>
#include <cmath>
#include <tuple>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, x,y;
    cin >> n >> m;
    int distance;
    priority_queue<tuple<int,int,int>> pq;
    tuple<int,int,int> t;
    for(int i = 0; i<n; i++)
    {
        cin >> x >> y;
        distance = abs(x) + abs(y);
        pq.push(make_tuple(-distance, -x, -y));
    }
    for(int i = 0; i<m; i++)
    {
        t = pq.top();
        get<1>(t) = get<1>(t) - 2;
        get<2>(t) = get<2>(t) - 2;
        get<0>(t) = -(abs(get<1>(t)) + abs(get<2>(t)));
        pq.pop();
        pq.push(t);
    }
    t = pq.top();
    cout << -(get<1>(t)) <<" " << -(get<2>(t)) <<endl;
    return 0;
}