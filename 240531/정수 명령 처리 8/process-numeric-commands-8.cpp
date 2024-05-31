#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    string s;
    int num;
    list<int> l;
    for(int i = 0; i<n; i++)
    {
        cin >> s;
        if(s == "push_back")
        {
            cin >> num;
            l.push_back(num);
        }
        else if(s == "push_front")
        {
            cin >> num;
            l.push_front(num);
        }
        else if(s == "pop_front")
        {
            cout << l.front() << endl;
            l.pop_front();
        }
        else if(s == "pop_back")
        {
            cout << l.back() << endl;
            l.pop_back();
        }
        else if(s == "size")
        {
            cout << l.size() << endl;
        }
        else if(s == "empty")
        {
            if(l.empty()) cout << "1" << endl;
            else cout << "0" << endl;
        }
        else if(s == "front")
        {
            cout << l.front() << endl;
        }
        else cout << l.back() << endl;
    }
    return 0;
}