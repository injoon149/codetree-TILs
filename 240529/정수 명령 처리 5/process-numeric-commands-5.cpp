#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, num;
    cin >> n;
    vector<int> v;
    string s;
    for(int i = 0; i<n; i++)
    {
        cin >> s;
        if(s =="push_back")
        {
            cin >> num;
            v.push_back(num);
        }
        else if(s == "pop_back")
        {
            v.pop_back();
        }
        else if(s == "size")
        {
            cout << v.size() << endl;
        }
        else if(s == "get")
        {
            cin >> num;
            cout << v[num-1] << endl;
        }
    }
    return 0;
    
    return 0;
}