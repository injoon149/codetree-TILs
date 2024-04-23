#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s1, s2;
    cin >> s1;
    cin >> s2;
    sort(begin(s1), end(s1));
    sort(begin(s2), end(s2));
    if(s1 == s2) cout << "Yes";
    else cout << "No";
    return 0;
}