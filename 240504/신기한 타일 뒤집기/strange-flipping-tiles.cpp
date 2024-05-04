#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, x;
    cin >> n;
    char c;
    vector<int> v(200001, 0);
    int location = 0;
    for(int i = 0; i<n; i++)
    {
        cin >> x >> c;
        if(c == 'R')
        {
            for(int j = location+100000; j< location+100000+x; j++)
            {
                v[j] = 2;
            }
            location += (x-1);
        }
        else
        {
            for(int j = location - x + 100001; j <= location+100000; j++)
            {
                v[j] = 1;
            }
            location -= (x-1);
        }
    }
    int whitecount = 0, blackcount = 0;
    for(int i = 0; i<v.size(); i++)
    {
        if(v[i] == 1)
        {
            whitecount++;
        }
        else if(v[i] == 2) blackcount++;
    }
    cout << whitecount <<" "<<blackcount;
    return 0;
}