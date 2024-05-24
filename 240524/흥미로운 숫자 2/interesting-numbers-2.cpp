#include <iostream>
#include <set>
#include <string>
using namespace std;

bool solution(int num)
{
    set<char> set1;
    string s = to_string(num);
    for(int i = 0; i<s.size(); i++)
    {
        set1.insert(s[i]);
    }
    if(set1.size() == 2) return true;
    else return false;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int x, y;
    cin >> x >> y;
    int cnt = 0;
    for(int i = x; i<=y; i++)
    {
        if(solution(i) == true) cnt++;
    }
    cout << cnt;
    return 0;
}