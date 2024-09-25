#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<pair<int,int>> events;

    int x1, x2;
    for(int i = 0; i<n; i++)
    {
        cin >> x1 >> x2;
        events.push_back(make_pair(x1, 1));
        events.push_back(make_pair(x2, -1));
    }
    sort(events.begin(), events.end());
    int max_overlap = 0;
    int current_overlap = 0;

    for(auto event : events)
    {
        current_overlap += event.second;
        max_overlap = max(max_overlap, current_overlap);
    }
    cout << max_overlap << endl;
    return 0;
}