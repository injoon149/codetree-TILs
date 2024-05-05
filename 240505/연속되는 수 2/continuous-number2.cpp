#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, num;
    cin >> n;
    int cnt = 0;
    vector<int> v;
    for(int i = 0; i<n; i++)
    {
        cin >> num;
        v.push_back(num);
    }
    int max = 0;
    for(int i = 0; i<n; i++)
    {
        if(i==0 || v[i] != v[i-1])
        {
         cnt++;   
         if(cnt > max) max = cnt;
        }
    }
    cout << max;
    
    return 0;
}