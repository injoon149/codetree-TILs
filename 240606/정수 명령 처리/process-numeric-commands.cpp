#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    stack<int> int_stack;
    string s;
    int num;
    for(int i = 0; i<n; i++)
    {
        cin >> s;
        if(s == "push")
        {
            cin >> num;
            int_stack.push(num);
        }
        else if(s == "pop")
        {
            cout << int_stack.top() << endl;
            int_stack.pop();
        }
        else if(s == "size") cout << int_stack.size() << endl;
        else if(s == "empty")
        {
            if(int_stack.empty()) cout << 1 << endl;
            else cout << 0 << endl;
        }
        else if(s == "top")
        {
            cout << int_stack.top() << endl;
        }
    }

    return 0;
}