#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    set<int> s;
    set<int> bcard;
    for(int i = 1; i<=2*n; i++)
    {
        s.insert(i);
    }
    int card;
    for(int i = 0; i<n; i++)
    {
        cin >> card;
        s.erase(s.find(card));
        bcard.insert(card);
    }
    int cnt = 0;
    for(auto iter = bcard.begin(); iter != bcard.end(); iter++)
    {
        for(auto iter2 = s.begin(); iter2 != s.end(); iter2++)
        {
            if(*iter2 > *iter)
            {
                cnt++;
                s.erase(iter2);
                break;
            }
        }
    }
    cout << cnt;
    return 0;
}