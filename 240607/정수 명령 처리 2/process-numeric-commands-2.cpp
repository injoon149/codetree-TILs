#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    queue<int> q;
    string s;
    int num;
    int n;
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cin >> s;
        if(s == "push")
        {
            cin >> num;
            q.push(num);
        }
        else if(s == "pop")
        {
            cout << q.front() << endl;
            q.pop();
        }
        else if(s == "size")
        {
            cout << q.size() << endl;
        }
        else if(s == "empty")
        {
            if(q.empty()) cout << "1" << endl;
            else cout << "0" << endl;
        }
        else if(s == "front")
        {
            cout << q.front() << endl;
        }
    }
    return 0;
}
        {
            if(s.empty()) cout << "1" << endl;
            else cout << "0" << endl;
        \}
        else if(s == "front")
        {
            cout << q.front() << endl;
        \}
    \}
    return 0;

61427int main() {    {        {
$0