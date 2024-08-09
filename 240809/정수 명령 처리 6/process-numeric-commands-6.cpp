#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string s;
    int num;
    priority_queue<int> pq;

    for(int i = 0; i<n; i++)
    {
        cin >> s;
        if(s == "push") 
        {
            cin >> num;
            pq.push(num);
        }
        else if(s == "size") cout << pq.size() << endl;
        else if(s == "empty")
        {
            if(pq.empty()) cout << "1" << endl;
            else cout << "0" << endl;
        }
        else if(s == "pop")
        {
            cout << pq.top() << endl;
            pq.pop();
        }
        else if(s == "top")
        {
            cout << pq.top() << endl;
        }
    }

    return 0;
}