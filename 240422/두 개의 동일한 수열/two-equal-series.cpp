#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    vector<int> v1(n, 0);
    vector<int> v2(n, 0);
    for(int i = 0; i<n; i++)
    {
        cin >> v1[i];
    }
    for(int i = 0; i<n; i++)
    {
        cin >> v2[i];
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    for(int i = 0; i<n; i++)
    {
        if(v1[i] != v2[i]){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    
    return 0;
}