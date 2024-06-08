#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    deque<int> d;
    int n;
    string s;
    int num;
    for(int i = 0; i<n; i++)
    {
        cin >> s;
        if(s == "push_front")
        {
            cin >> num;
            d.push_front(num);
        }
        else if(s == "push_back")
        {
            cin >> num;
            d.push_back(num);
        }
        else if(s == "pop_front")
        {
            d.pop_front();
        }
        else if(s == "pop_back")
        {
            d.pop_back();
        }
        else if(s == "size")
        {
            cout << d.size() << endl;
        }
        else if(s == "empty")
        {
            if(s.empty()) cout << "1" << endl;
            else cout << "0" << endl;
        }
        else if(s == "front")
        {
            cout << d.front() << endl;
        }
        else
        {
            cout << d.back() << endl;
        }
    }

    return 0;
}