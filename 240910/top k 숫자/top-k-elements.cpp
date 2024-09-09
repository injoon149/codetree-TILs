#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, k;
    cin >> n >> k;
    int num;
    set<int, greater<int>> s;
    for(int i = 0; i<n; i++)
    {
        cin >> num;
        s.insert(num);
    }
    auto it = s.begin();
    for(int i = 0; i<k; i++)
    {
        cout << *it <<" ";
        it++;
    }
    return 0;
}