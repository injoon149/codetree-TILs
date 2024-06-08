#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    deque<int> d;
    int n;
    cin >> n;
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
            cout << d.front() << endl;
            d.pop_front();
        }
        else if(s == "pop_back")
        {
            cout << d.back() << endl;
            d.pop_back();
        }
        else if(s == "size")
        {
            cout << d.size() << endl;
        }
        else if(s == "empty")
        {
            if(d.empty()) cout << "1" << endl;
            else cout << "0" << endl;
        }
        else if(s == "front")
        {
            cout << d.front() << endl;
        }
        else if(s == "back")
        {
            cout << d.back() << endl;
        }
    }

    return 0;
}