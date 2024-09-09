#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, num;
    cin >> n;
    unordered_set<int> s;
    for(int i = 0; i<n; i++)
    {
        cin >> num;
        s.insert(num);
    }
    cout << s.size();
    return 0;
}