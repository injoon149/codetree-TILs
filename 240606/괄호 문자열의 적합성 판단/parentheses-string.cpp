#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    stack<char> int_stack;
    cin >> s;
    for(int i = 0; i<s.size(); i++)
    {
        if(s[i] == '(')
        {
            int_stack.push(s[i]);
        }
        else
        {
            if(int_stack.empty())
            {
                cout << "No";
                return 0;
            }
            else
            {
                int_stack.pop();

            }
        }
    }
    if(int_stack.empty()) cout << "Yes";
    else cout << "No";
    
    return 0;
}