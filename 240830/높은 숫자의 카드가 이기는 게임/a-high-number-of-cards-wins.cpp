#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    set<int> s;
    vector<int> bcard;
    for(int i = 1; i<=2*n; i++)
    {
        s.insert(i);
    }
    int card;
    for(int i = 0; i<n; i++)
    {
        cin >> card;
        s.erase(s.find(card));
        bcard.push_back(card);
    }
    int cnt = 0;
    for(int i = 0; i<bcard.size(); i++)
    {
        auto iter = s.upper_bound(bcard[i]);
        if(iter != s.end())
        {
            cnt++;
            s.erase(iter);
        }
        else
        {
            auto iter2 = s.begin();
            s.erase(iter2);
        }
    }
    cout << cnt;
    return 0;
}