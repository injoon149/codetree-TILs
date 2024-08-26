#include <iostream>
#include <queue>
#include <functional>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int num;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i<n; i++)
    {
        cin >> num;
        pq.push(num);
    }
    int result = 0;
    while(!pq.empty())
    {
        if(pq.size() == 1) 
        {
            //result += pq.top();
            break;
        }
        else
        {
            int sum = 0;
            sum += pq.top();
            pq.pop();
            sum += pq.top();
            pq.pop();
            pq.push(sum);
            result += sum;
        }
    }
    cout << result;
    

    return 0;
}