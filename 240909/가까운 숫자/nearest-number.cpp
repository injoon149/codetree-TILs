#include <iostream>
#include <set>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    set<int> s;
    int num;
    s.insert(0);
    int ans = INT_MAX;

    for(int i = 0; i<n; i++)
    {
        cin >> num;
        s.insert(num);

        auto it = s.find(num);
        int left = INT_MAX, right = INT_MAX;

        if(it != s.begin())
        {
            auto prev_it = prev(it);
            left = num - *prev_it;
        }
        auto next_it = next(it);
        if(next_it != s.end())
        {
            right = *next_it - num;
        }
        int ans_sec = min(left,right);
        ans = min(ans, ans_sec);
        cout << ans << endl;
    }
    return 0;

}