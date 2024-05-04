#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, x;
    cin >> n;
    char c;
    vector<int> v(2001, 0);
    int location = 0;
    for(int i = 0; i<n; i++)
    {
        cin >> x >> c;
        if(c == 'R')
        {
            for(int j = location+1000; j< location+x+1000; j++)
            {
                v[j]++;
            }
            location += x;
        }
        else
        {
            for(int j = location-x+1000+1; j<=location+1000; j++)
            {
                v[j]++;
            }
            location -= x;
        }
    }
    int cnt = 0;
    for(int i = 0; i<v.size(); i++)
    {
        if(v[i] >= 2) cnt++;
    }
    cout << cnt;
    
    return 0;
}