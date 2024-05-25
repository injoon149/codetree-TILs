#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, a,b,c;
    cin >> n;
    vector<int> v(4, 0);
    int max = 0;
    int cnt = 0;
    vector<int> va(n, 0);
    vector<int> vb(n, 0);
    vector<int> vc(n, 0);
    for(int i = 0; i<n; i++)
    {
        cnt = 0;
        cin >> va[i] >> vb[i] >> vc[i];
    }
    for(int i = 1; i<=3; i++)
    {
        for(int k = 0; k<v.size(); k++)
        {
            v[k] = 0;
        }
        int cnt = 0;
        v[i] = 1;
        for(int j = 0; j<n; j++)
        {
            int sum = v[va[j]];
            v[va[j]] = v[vb[j]];
            v[vb[j]] = sum;
            if(v[vc[j]] == 1) 
            {
                cnt++;
            }
        }
        if(max < cnt) max = cnt;
    }
    cout << max;
    return 0;
}