#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    vector<int> v(101, 0);
    int a,b,c,d;
    cin >> a >> b;
    cin >> c >> d;
    for(int i = a; i<b; i++)
    {
        v[i] = 1;
    }
    for(int i = c; i<d; i++)
    {
        v[i] = 1;
    }
    int cnt = 0;
    for(int i = 0; i<101; i++)
    {
        if(v[i] == 1) cnt++;
    }
    cout << cnt;
    return 0;
}