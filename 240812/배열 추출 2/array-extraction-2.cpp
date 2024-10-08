#include <iostream>
#include <queue>
#include <cmath>
#include <vector>
using namespace std;

struct compare {
    bool operator()(int a, int b)
    {
        if(abs(a) == abs(b))
        {
            return a > b;
        }
        else return abs(a) > abs(b);
    }
};

int main() {
    // 여기에 코드를 작성해주세요.
    priority_queue<int, vector<int>, compare> pq;
    int n, x;
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cin >> x;
        if(x == 0) {
            if(pq.empty()) cout << "0" << endl;
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