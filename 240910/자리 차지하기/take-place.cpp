#include <iostream>
#include <set>

#define MAX_N 1000000
using namespace std;

int n,m;
int arr[MAX_N];

set<int> seats;

int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin >> n >> m;
    for(int i = 0; i<n; i++) cin >> arr[i];
    for(int i = 1; i<=m; i++) seats.insert(i);
    int ans = 0;

    for(int i = 0; i<n; i++) {
        set<int>::iterator idx = seats.upper_bound(arr[i]);

        if(idx != seats.begin()) {
            idx--;
            seats.erase(*idx);
            ans++;
        }
        else break;
    }
    cout << ans;
    return 0;
}