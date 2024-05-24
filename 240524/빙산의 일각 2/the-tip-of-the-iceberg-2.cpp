#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for(int i = 0; i<n; i++)
    {
        cin >> v[i];
    }
    int max = 0;
    for(int i = 0; i<=1000; i++)
    {
        bool newPart = false;
        int cnt = 0;
        for(int j = 0; j<n; j++)
        {
            if(v[j] >= i) {
                if(newPart == false) 
                {
                    newPart = true;
                    cnt++;
                }
            }
            else {
                newPart = false;
            }
        }
        if(max < cnt) max = cnt;
    }
    cout << max;
    return 0;
}