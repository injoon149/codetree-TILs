#include <iostream>
#include <map>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int num;
    map<int,int> m;
    for(int i = 0; i<n; i++)
    {
        cin >> num;
        if(m.find(num) == m.end())
        {
            m[num] = i+1;
        }
        else continue;
    }
    for(auto iter = m.begin(); iter != m.end(); iter++)
    {
        cout << iter->first <<" "<<iter->second << endl;
    }
    return 0;
}